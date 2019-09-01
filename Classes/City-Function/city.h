#ifndef CITY_H
#define CITY_H
#include<iostream>
#include<regex>
#include<vector>
#include<stdexcept>
#include<string.h>
// #include "nbind/nbind.h"
typedef unsigned long size_t;
typedef std::vector<std::string> svector;

class City{ 
    public:

        std::string Random(int);
        bool Validate(std::string);
        bool Validate(std::string,std::string);
        void Add(std::string);
        void Remove(std::string);
        void Show();
    private:
        std::string Generate(size_t);
        svector cities;
};
// NBIND_CLASS(City){
//     construct<>();
//     method(Generate_City);
//     multimethod(Validate_City, args(std::string), "Validate_city");
//     multimethod(Validate_City, args(std::string,std::string), "Validate_Specific_city");
//     method(Add_City);
//     method(Remove_City);
// }

#endif