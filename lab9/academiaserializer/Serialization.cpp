//
// Created by Student on 04/05/17.
//

#include "Serialization.h"

namespace academia {
    Room::Room(int id_, const string &name_, academia::Room::Type type_) : id_(id_), name_(name_), type_(type_) {}

    void Room::Serialize(Serializer *serializer) const{
        serializer->Header("building");
        serializer->IntegerField("id", id_);
        serializer->Separate();
        serializer->StringField("name", name_);
        serializer->StringField("type", TypeToString(type_));
        serializer->Footer("room");
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

}