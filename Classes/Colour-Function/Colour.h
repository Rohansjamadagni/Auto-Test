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
        bool Validate(std::string);
        std::string Random_Word(size_t);
        std::string Random(std::string);
};
#endif
// NBIND_CLASS(Colour){
//     construct<>();
//     method(Validate_Colour);
//     method(Generate_Colour);
// }