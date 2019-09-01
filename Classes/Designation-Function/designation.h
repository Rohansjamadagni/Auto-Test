#ifndef DESIGNATION_H
#define DESIGNATION_H
#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include<stdexcept>
#include<vector>
#include<regex>

typedef unsigned long size_t;
typedef std::vector<std::string> svector;

// #include "nbind/nbind.h"

class Designation       {
    public:
        std::string Random(int,int,int,bool);
        bool Validate(std::string);
        void Add(std::string);
        void Remove(std::string);
        void Show();
        void VectorInit();
    private:
        void writetofile(std::string);
        std::string Generate(size_t);
        std::string Generate_Invalid(size_t);
        svector desList;
};

#endif

// NBIND_CLASS (DESIGNATION) {
//     construct<>();
//     method(Random);
//     multimethod(Validate, args(std::string));
//     multimethod(Validate, args(std::string, int));
//     multimethod(Validate, args(std::string , std::string));
//     method(Add);
//     method(Remove);
// }