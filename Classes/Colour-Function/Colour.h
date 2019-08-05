#ifndef COLOUR_H
#define COLOUR_H
#include<iostream>
#include<stdexcept>
#include<regex>
#include<strings.h>
// #include "nbind/nbind.h"

typedef unsigned long size_t;

class Colour
{
    public:
        std::string Random();
        bool Validate(std::string);
        std::string Random(std::string);
    private:
        std::string Random_Word(size_t);
};
#endif
// NBIND_CLASS(Colour){
//     construct<>();
//     method(Validate_Colour);
//     method(Generate_Colour);
// }