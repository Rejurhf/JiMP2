//
// Created by Rejurhf on 10.04.2017.
//

#include <Zipper.h>
#include <iostream>

using namespace std;
using datastructures::Zipper;
int main(){
    vector<string> str={"cos", "i", "cos innego"};

    vector<int> values={3, 2, 1};
    for (const pair<string,int> &v : Zipper::zip(str, values) ){
        cout << v.first << endl;
        cout << v.second << endl;
    }
}