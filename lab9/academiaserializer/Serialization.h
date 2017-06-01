//
// Created by Student on 04/05/17.
//

#ifndef JIMP_EXERCISES_SERIALIZATION_H
#define JIMP_EXERCISES_SERIALIZATION_H

#include <iostream>
#include <vector>
#include <functional>

using std::string;

namespace academia {
    class Serializer;

    class Serializable{
    public:
        virtual void Serialize(Serializer *) const= 0;
    };

    class Serializer {
    public:
        Serializer(std::ostream *out): out_(out){};

        virtual void Separate(){(*out_)<<"";}
        virtual void IntegerField(const string &field_name, int value) = 0;
        virtual void DoubleField(const string &field_name, double value) = 0;
        virtual void StringField(const string &field_name, const std::string &value) = 0;
        virtual void BooleanField(const string &field_name, bool value) = 0;
        virtual void SerializableField(const string &field_name, const academia::Serializable &value) = 0;
        virtual void ArrayField(const string &field_name,
                                const std::vector<std::reference_wrapper<const academia::Serializable>> &value) = 0;
        virtual void Header(const std::string &object_name) = 0;
        virtual void Footer(const std::string &object_name) = 0;

    protected:
        std::ostream *out_;
    };

    class Room: public Serializable{
    public:
        enum class Type {
            CLASSROOM,
            LECTURE_HALL,
            COMPUTER_LAB
        };
        Room(int id, const string &name, Room::Type type);
        void Serialize(Serializer *serializer) const override;
    private:
        int id_;
        string name_;
        Type type_;
        string TypeToString(const Type &type) const{
            switch(type){
                case Type::CLASSROOM:
                    return "CLASSROOM";
                case Type::LECTURE_HALL:
                    return "LECTURE_HALL";
                case Type::COMPUTER_LAB:
                    return "COMPUTER_LAB";
            }
        }
    };

    class Building: public Serializable{
    public:
        Building(int id, const string &name, const std::vector<Room> &rooms);
        void Serialize(Serializer *serializer) const override;
    private:
        int id_;
        string name_;
        std::vector<Room> rooms_;
    };

    class XmlSerializer: public Serializer{
    public:
        XmlSerializer(std::ostream *out): Serializer(out){};
        virtual void IntegerField(const string &field_name, int value) override;
        virtual void DoubleField(const string &field_name, double value) override{};
        virtual void StringField(const string &field_name, const std::string &value) override;
        virtual void BooleanField(const string &field_name, bool value) override{};
        virtual void SerializableField(const string &field_name, const academia::Serializable &value) override;
        virtual void ArrayField(
                const string &field_name,
                const std::vector<std::reference_wrapper<const academia::Serializable>> &value) override{};
        virtual void Header(const std::string &object_name) override;
        virtual void Footer(const std::string &object_name) override;
    };

    class JsonSerializer: public Serializer{
    public:
        JsonSerializer(std::ostream *out): Serializer(out){};
        virtual void IntegerField(const string &field_name, int value) override;
        virtual void DoubleField(const string &field_name, double value) override{};
        virtual void StringField(const string &field_name, const std::string &value) override;
        virtual void BooleanField(const string &field_name, bool value) override{};
        virtual void SerializableField(const string &field_name, const academia::Serializable &value) override;
        virtual void ArrayField(
                const string &field_name,
                const std::vector<std::reference_wrapper<const academia::Serializable>> &value) override{};
        virtual void Header(const std::string &object_name) override;
        virtual void Footer(const std::string &object_name) override;

        void Separate() override {(*out_) << ", ";}
    };
}

#endif //JIMP_EXERCISES_SERIALIZATION_H
