#ifndef NAME_H
#define NAME_H
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;

// #include "nbind/nbind.h"


class Name{
    public:
            bool Validate(std::string,int);
            bool Validate(std::string);
            std::string Random(int,int,int,bool);
    private:
            std::string Generate_Word(size_t);
            std::string Generate_Invalid_Word(size_t);


};

#endif

// NBIND_CLASS (Name) {
//     construct<>();
//     method(Random_Name);
//     multimethod(Validate_Name, args(std::string), "Validate_Name");
//     multimethod(Validate_Name, args(std::string , int), "Validate_Name_withspecifier");

// }