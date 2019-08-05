#ifndef COMPANY_H
#define COMANY_H
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdexcept>
#include<vector>
#include<regex>
typedef unsigned long size_t;
typedef std::vector<std::string> svector;

// #include "nbind/nbind.h"


class Company{
    public:
            bool Validate(std::string,std::string);
            bool Validate(std::string,int);
            bool Validate(std::string);
            std::string Random(int,int,int,bool);
            std::string Generate(size_t);
            std::string Generate_I(size_t);
            void Add(std::string);
            void Remove(std::string);
            void Show();
            svector companies;
};

#endif

// NBIND_CLASS (Company) {
//     construct<>();
//     method(Random);
//     multimethod(Validate, args(std::string));
//     multimethod(Validate, args(std::string, int));
//     multimethod(Validate, args(std::string , std::string));
//     method(Add);
//     method(Remove);
// }