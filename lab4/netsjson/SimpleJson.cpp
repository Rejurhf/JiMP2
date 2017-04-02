//
// Created by Rejurhf on 29.03.2017.
//


#include "SimpleJson.h"

namespace nets{
    JsonValue::JsonValue(int value){
        value_int_ = value;
        type_ = 1;
    }
    JsonValue::JsonValue(double value){
        value_double_ = value;
        type_ = 2;
    }
    JsonValue::JsonValue(bool value){
        value_bool_ = value;
        type_ = 3;
    }
    JsonValue::JsonValue(std::string value){
        value_string_ = value;
        type_ = 4;
    }
    JsonValue::JsonValue(std::vector<JsonValue> value){
        value_vector_ = value;
        type_ = 5;
    }
    JsonValue::JsonValue(std::map<std::string, JsonValue> value){
        value_map_ = value;
        type_ = 6;
    }
    std::experimental::optional<JsonValue> JsonValue::ValueByName(const std::string &name) const{
        auto i = value_map_.find(name);
        if(i != value_map_.end()){
            return std::experimental::make_optional(i->second);
        }
        else{
            return {};
        }
    }
    std::string JsonValue::ToString() const{
        std::string out = "";
        switch(type_){
            case 1:
                out = std::to_string(value_int_);
                break;
            case 2:
                out = std::to_string(value_double_);
                while(out[out.size()-1] == '0')
                    out.pop_back();
                break;
            case 3:
                if(value_bool_ == 0)
                    out = "false";
                else
                    out = "true";
                break;
            case 4:
                out += "\"";
                for (int i = 0; i < value_string_.size(); ++i) {
                    if (value_string_[i] == '"' or value_string_[i] == '\\')
                        out += "\\";
                    out += value_string_[i];
                }
                out += "\"";
                break;
            case 5:
                out += "[";
                for (int i = 0; i < value_vector_.size(); ++i) {
                    if(i != 0)
                        out += ", ";
                    out += value_vector_[i].ToString();
                }
                out += "]";
                break;
            case 6:
                out += "{";
                bool first = true;
                for(auto v : value_map_){
                    if(!first)
                        out += ", ";
                    first = false;
                    out += "\"";
                    for (int i = 0; i < v.first.size(); ++i) {
                        if (v.first[i] == '"' or v.first[i] == '\\')
                            out += "\\";
                        out += v.first[i];
                    }
                    out += "\": " + v.second.ToString();
                }
                out += "}";
                break;
        }
        return out;
    }
}