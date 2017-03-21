//
// Created by Rejurhf on 19.03.2017.
//

#include "CCounter.h"

namespace ccounter{
    std::unique_ptr<Counter> Init(){
        std::unique_ptr<Counter> count = std::make_unique<Counter>();
        return count;
    }

    void Inc(std::string key, std::unique_ptr<Counter>* counter){
        auto obj = (*counter)->phrases.find(key);
        if(obj != (*counter)->phrases.end())
            obj->second++;
        else
            (*counter)->phrases.emplace(key, 1);
    }

    int Counts(const std::unique_ptr<Counter> &counter, std::string key){
        auto obj = (*counter).phrases.find(key);
        if(obj != counter->phrases.end())
            return obj->second;
        else
            return 0;
    }

   void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter){
       (*counter)->phrases.emplace(key, value);
    }
}