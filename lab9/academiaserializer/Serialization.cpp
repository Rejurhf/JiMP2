//
// Created by Student on 04/05/17.
//

#include "Serialization.h"

namespace academia {
    Room::Room(int id_, const string &name_, academia::Room::Type type_) : id_(id_), name_(name_), type_(type_) {}

    void Room::Serialize(Serializer *serializer) {
        serializer->IntegerField("id", id_);
        serializer->StringField("name", name_);
        serializer->Footer("room");
        serializer->Header("room");
    }
}