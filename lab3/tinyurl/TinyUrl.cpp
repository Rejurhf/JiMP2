//
// Created by Rejurhf on 19.03.2017.
//

#include "TinyUrl.h"

namespace tinyurl{
    std::unique_ptr<TinyUrlCodec> Init(){
        std::unique_ptr<TinyUrlCodec> codec = std::make_unique<TinyUrlCodec>();
        return codec;
    }

    void NextHash(std::array<char, 6> *state){

    }

    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec){

    }

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash){
        return codec->url;
    }
}