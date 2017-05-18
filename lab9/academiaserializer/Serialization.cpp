//
// Created by Student on 04/05/17.
//

#include "Serialization.h"

namespace academia {
    Room::Room(int id_, const string &name_, academia::Room::Type type_) : id_(id_), name_(name_), type_(type_) {}

    void Room::Serialize(Serializer *serializer) const{
        serializer->Header("room");
        serializer->IntegerField("id", id_);
        serializer->Separate();
        serializer->StringField("name", name_);
        serializer->Separate();
        serializer->StringField("type", TypeToString(type_));
        serializer->Footer("room");
    }

    Building::Building(int id_, const string &name_, const std::vector<Room> &rooms_) : id_(id_), name_(name_),
                                                                                        rooms_(rooms_) {}

    void Building::Serialize(Serializer *serializer) const {
        serializer->Header("building");
        serializer->IntegerField("id", id_);
        serializer->Separate();
        serializer->StringField("name", name_);
        serializer->Separate();
        serializer->Header("room");
        for(int i = 0; i < rooms_.size(); ++i){
            rooms_[i].Serialize(serializer);
            if(i != rooms_.size()-1)
                serializer->Separate();
        }
        serializer->Footer("room");
        serializer->Footer("building");
    }

    void XmlSerializer::IntegerField(const string &field_name, int value){
        (*out_) << "<" << field_name << ">" << value << "<\\" <<  field_name <<">";
    }

    void XmlSerializer::StringField(const string &field_name, const std::string &value) {
        (*out_) << "<" << field_name << ">" << value << "<\\" << field_name << ">";
    }

    void XmlSerializer::SerializableField(const string &field_name, const academia::Serializable &value) {
        (*out_) << "<" << field_name << ">";
        value.Serialize(this);
        (*out_) << "<\\" << field_name << ">";
    }

    void XmlSerializer::Header(const std::string &object_name) {
        (*out_) << "<" << object_name << ">";
    }

    void XmlSerializer::Footer(const std::string &object_name) {
        (*out_) << "<\\" << object_name << ">";
    }

    void JsonSerializer::IntegerField(const string &field_name, int value) {
        (*out_) << "\"" << field_name << "\": " << value;
    }

    void JsonSerializer::StringField(const string &field_name, const std::string &value) {
        (*out_) << "\"" << field_name << "\": \"" << value << "\"";
    }

    void JsonSerializer::SerializableField(const string &field_name, const academia::Serializable &value) {
        value.Serialize(this);
    }

    void JsonSerializer::Header(const std::string &object_name) {
        if(object_name == "building" or object_name == "room")
            (*out_) << "{";
        if(object_name == "rooms")
            (*out_) << "\"rooms\": [";
    }

    void JsonSerializer::Footer(const std::string &object_name) {
        if(object_name == "building" or object_name == "room")
            (*out_) << "}";
        if(object_name == "rooms")
            (*out_) << "]";
    }
}