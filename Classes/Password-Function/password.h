#ifndef PASSWORD_H
#define PASSWORD_H
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;

// #include "nbind/nbind.h"


class Password{
    public:
            bool Validate(std::string,std::string);
            std::string Random(size_t,size_t);//min length,max length
    private:
            std::string Generate_Word(size_t);


};

#endif


// NBIND_CLASS (Password) {
//     construct<>();
//     method(Check_SpecialChar_Password);
//     method(Check_Capital_Password);
//     method(Random_Password);
    

// }