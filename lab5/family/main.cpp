//
// Created by Rejurhf on 02.04.2017.
//

#include <iostream>
#include "Parent.h"

using ::std::cout;
using ::std::endl;

int main(){
    Child karol ("Karol", "Kowalski", 9, "Jakas szkola");
    Parent ewa {"Ewa", "Kowalska", 35};
    ewa.SetChild(karol);
    cout<<karol.GetSchool()<<endl;
    ewa.ChangeSchool("Inna szkola");
    cout<<karol.GetSchool()<<endl;
    return 0;
}

