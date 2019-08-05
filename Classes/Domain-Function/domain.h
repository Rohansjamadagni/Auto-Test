#ifndef DOMAIN_H
#define DOMAIN_H
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;
typedef std::vector<std::string> svector;
//#include "nbind/nbind.h"


class Domain{
    public:
        void Add(std::string);
        void Add(std::string,std::string);
        void Remove(std::string);
        void Remove(std::string,std::string);
        void Show();
        void Show(std::string);
        bool Validate(std::string);
        bool Validate(std::string,std::string);
        std::string Random(int);
   private: 

        bool Check_Validity(std::string);
        std::string Random_Word(size_t);
        std::string Random_Ext();
        svector domains,generic_domains,specific_domains;

};

#endif

// NBIND_CLASS(Domain){
//     construct<>();
//     multimethod(Add_Domain, args(std::string), "Add_Domain");
//     multimethod(Add_Domain, args(std::string,std::string), "Add_DomainWithKey");
//     multimethod(Remove_Domain, args(std::string), "Remove_Domain");
//     multimethod(Remove_Domain, args(std::string,std::string), "Remove_DomainWithKey");
//     method(Show_All_Domains);
//     method(Show_Generic_Domains);
//     method(Show_Specific_Domains);
//     multimethod(Validate_Domain, args(std::string),"Validate_Domain");
//     multimethod(Validate_Domain, args(std::string,std::string),"Validate_DomainWithKey");
//     method(Random_Domain);

// }