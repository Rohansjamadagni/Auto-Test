#ifndef GENDER_H
#define GENDERE_H
#include <iostream>
#include <string> 
#include <stdexcept>
#include <regex>

// #include "nbind/nbind.h"

class Gender       {
    public:
    bool Validate(std::string);
};

#endif 

/* NBIND_CLASS(Gender){
    construct<>();
    method(Validate);
} */