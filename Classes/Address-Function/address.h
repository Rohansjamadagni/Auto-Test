#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
#include<stdexcept>
#include<regex>
#include<strings.h>
// #include "nbind/nbind.h"

typedef unsigned long size_t;

class Address
{
    public:
        std::string Random(int);//x=0 invalid x=1 valid
        bool Validate(std::string);
    private:
        std::string Random_Word(size_t);
        std::string Random_Invalid_Word(size_t);
};
#endif

// NBIND_CLASS(Address){
//     construct<>();
//     method(Generate_Address);
//     method(Check_Validity);
// }
