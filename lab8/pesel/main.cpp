//
// Created by Student on 27/04/17.
//

#include <Pesel.h>
#include <iostream>

using namespace academia;

int main() {
    try {
        Pesel p{"44051401358"};
    }catch(const InvalidPeselLength &arg){
        std::cerr << arg.what() << std::endl;
    }catch(const InvalidPeselCharacter &arg){
        std::cerr << arg.what() << std::endl;
    }catch(const InvalidPeselChecksum &arg){
        std::cerr << arg.what() << std::endl;
    }
    return 0;
}
