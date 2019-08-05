#ifndef EMAIL_H
#define EMAIL_H
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<regex>
#include<vector>
// #include "nbind/nbind.h"
typedef unsigned long size_t;
typedef std::vector<std::string> svector;
class Email{

public:
    std::string Get_Info(std::string,std::string);
    void Add(std::string);
    void Add(std::string,std::string);
    void Remove(std::string);
    void Remove(std::string,std::string);
    void Show();
    void Show(std::string);
    void Show_Generic_Domains();
    void Show_Specific_Domains();
    bool Validate(std::string);
    bool Validate(std::string,std::string);
    bool Check_Validity(std::string);
    std::string Random(int);
    std::string Random_Name(size_t);
    std::string Random_Domain(size_t);
    std::string Random_Email(int);
    svector domains,generic_domains,specific_domains;
    

};




// NBIND_CLASS(Email){
//     construct<>();
//     multimethod(Add_Domain, args(std::string), "Add_Domain");
//     multimethod(Add_Domain, args(std::string,std::string), "Add_DomainWithKey");
//     multimethod(Remove_Domain, args(std::string), "Remove_Domain");
//     multimethod(Remove_Domain, args(std::string,std::string), "Remove_DomainWithKey");
//     method(Show_All_Domains);
//     method(Show_Generic_Domains);
//     method(Show_Specific_Domains);
//     multimethod(Validate_Email, args(std::string),"Validate_Email");
//     multimethod(Validate_Email, args(std::string,std::string),"Validate_EmailWithKey");
//     method(Random_Domain);
//     method(Random_Name);

// }



#endif