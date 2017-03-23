//

// Created by Student on 16/03/17.

// Created by Rejurhf on 19.03.2017.

//

#include "TinyUrl.h

std::unique_ptr<TinyUrlCodec> Init();
void NextHash(std::arrray<char, 6> *state);
std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec);
std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash);

namespace tinyurl{
    std::array<char, 6> arry {'0', '0', '0', '0', '0', '0'};

    std::unique_ptr<TinyUrlCodec> Init(){
        std::unique_ptr<TinyUrlCodec> codec = std::make_unique<TinyUrlCodec>();
        return codec;
    }

    void NextHash(std::array<char, 6> *state){
        char *mark = state->end()-1;
        bool flag;
        do{
            flag = false;
            if(*mark == '9')
                *mark = 'A';
            else if(*mark == 'Z')
                *mark = 'a';
            else if(*mark == 'z'){
                *mark = '0';
                flag = true;
                mark = mark - 1;
            }
            else
                *mark += 1;
        }while(flag);
    }

    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec){
        std::string code = url;
        for (int i = 0; i < 6; ++i) {
            arry[i] = code[i];
        }
        (*codec)->url = url;
        NextHash(&arry);
        code = "";
        for(auto v : arry){
            code += v;
        }
        return code;
    }

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash){
        return codec->url;
    }
}

