//
// Created by Rejurhf on 13.03.2017.
//

#include <iostream>
#include "Palindrome.h"

using namespace std;

int main(){
    std::string str;
    char sel;
    while(true){
        cout<<"Wybierz opcję s (Sprawdz palindrom) lub w (Wyjdz)"<<endl;
        cin>>sel;
        if(sel == 'w') return 0;
        else if(sel == 's') {
            if(is_palindrome(str)) cout<<"Slowo jest palindormem";
            else cout<<"Slowo nie jest palindromem";
        }
    }
}