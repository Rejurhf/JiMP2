//
// Created by Rejurhf on 29.03.2017.
//

#ifndef JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H

#include <string>
#include <unordered_map>

namespace nets{
    class View{
    public:
        View(std::string text):text_(text){};
        std::string Render(const std::unordered_map <std::string, std::string> &model) const;
    private:
        std::string text_;
    };
}

#endif //JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
