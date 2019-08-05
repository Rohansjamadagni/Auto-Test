#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdexcept>


// #include "nbind/nbind.h"

class Date
{
    public: 
            std::string Add(std::string,int);
            std::string Subtract(std::string,int);
            bool equalTo(std::string,std::string);
            int offsetDays(int,int,int);
            void revoffsetDays(int, int, int*, int*);
            std::string subDays(int, int, int, int);
            std::string addDays(int, int, int, int);
            bool Validate(std::string);
            void Compare(std::string,std::string);
            bool isLeap(int);
            void ConvertToTen(char*);
            bool getVal(void);
            bool setval(std::string);
            void removeChar(char*, int);
            int remover(char*);
            std::string Random(void);
            std::string Random(std::string,int);
            std::string Random(std::string,std::string);
            int type(char*);
            std::string GetAge(std::string);
            Date operator==(const Date&);
            Date operator<(const Date&);
            Date operator+(const Date&);
            Date operator-(const Date&);

            std::string rdate;

            int d,m,y;
            bool boo;



};


// NBIND_CLASS (Date) {
//     construct<>();
//     method(add);
//     method(subtract);
//     method(equalTo);
//     method(GetAge);
//     method(comparer);
//     multimethod(randomDate, args(), "random1");
//     multimethod(randomDate, args(std::string,int), "random2");
//     multimethod(randomDate, args(int,int), "random3");

// }

#endif