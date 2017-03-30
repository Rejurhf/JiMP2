//
// Created by Rejurhf on 29.03.2017.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H

#include <experimental/optional>
#include <string>
#include <map>
#include <vector>

namespace nets{
    class JsonValue{
    public:
        JsonValue(int value);
        JsonValue(double value);
        JsonValue(bool value);
        JsonValue(std::string value);
        JsonValue(std::vector<JsonValue> value);
        JsonValue(std::map<std::string, JsonValue> value);
        std::experimental::optional<JsonValue> ValueByName(const std::string &name) const;
        std::string ToString() const;
    private:
        int value_int_;
        double value_double_;
        bool value_bool_;
        std::string value_string_;
        std::vector<JsonValue> value_vector_;
        std::map<std::string, JsonValue> value_map_;
        short type_;
    };
}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
