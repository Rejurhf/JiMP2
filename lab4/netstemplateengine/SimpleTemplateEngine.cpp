//
// Created by Rejurhf on 29.03.2017.
//

#include "SimpleTemplateEngine.h"

namespace nets{
    std::string View::Render(const std::unordered_map <std::string, std::string> &model) const{
        std::string out = "", tmp = "";
        for(int i = 0; i < text_.size(); ++i){
            if(text_[i] != '{' or text_[i+1] != '{' or (text_[i] == '{' and text_[i+2] == '{'))
                out += text_[i];
            else{
                i += 2;
                while(text_[i] != '}'){
                    tmp += text_[i];
                    ++i;
                }
                if(text_[i+1] != '}'){
                    out += "{{" + tmp + "}";
                } else{
                    if(model.find(tmp) != model.end())
                        out += model.at(tmp);
                    ++i;
                }
                tmp = "";
            }
        }
        return out;
    }
}
