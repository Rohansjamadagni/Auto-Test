#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <fstream>
#include <string> 
#include <stdexcept>
#include <regex>
typedef unsigned long size_t;
typedef std::vector<std::string> cvector;

// #include "nbind/nbind.h"

class Currency       {
    public:
        bool Validate(std::string);
        std::string GetCurrencyName(std::string);
        std::string Random(bool); 
    private:
        void VectorInit();
        std::string Generate(int);
        std::string Generate_Invalid(int);
        cvector CList, UList;
};

#endif 

// NBIND_CLASS(Currency){
//     construct<>();
//     method(VectorInit);
//     method(Validate);
//     method(Random);
//     method(Generate);
//     method(Generate_Invalid);
// }