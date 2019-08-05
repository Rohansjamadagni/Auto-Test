#ifndef DESCRIPTION_H
#define DESCRIPTION_H
#include<iostream>
#include<stdexcept>
#include<regex>
#include<strings.h>
// #include "nbind/nbind.h"

typedef unsigned long size_t;

class Description
{
    public:
        std::string Random(unsigned long long,int);
        std::string Generate_Word(size_t);
        std::string Generate_Char();
};
#endif
// NBIND_CLASS(Description){
//     construct<>();
//     method(Generate_Description);
// }



