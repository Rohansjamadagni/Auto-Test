#include "password.h"

using namespace std;
int i =0;
bool Password::Validate(std::string password,std::string key){
    bool flag;
    if(key=="capital"){
    flag = std::regex_match(password,std::regex("(\\w|\\W)*[A-Z](\\w|\\W)*"));
    }
    else if(key=="special"){
        flag = std::regex_match(password,std::regex("(\\w|\\W)*([^A-Za-z\\d])+(\\w|\\W)*"));
    }
    return flag;
}


std::string Password::Random(size_t min_length,size_t max_length){
    if(max_length<min_length){
            throw std::invalid_argument("Total length less than min length");
        }
    std::string password;
    srand(time(0)+(i++));
    size_t length;
    if(min_length!=max_length)
        length = rand()%(max_length-min_length)+min_length;
    else 
        length = min_length;
    password = Generate_Word(length);
    return password;
}

std::string Password::Generate_Word(size_t length){

    auto randchar = []() -> char
    {
        const char charset[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890~`!@#$%^&*()[]{}/?.><,_+";
        const size_t max_index = (sizeof(charset) - 1);           
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    srand(time(0)+i++);
    std::generate_n( str.begin(), length, randchar );
    return str;
}