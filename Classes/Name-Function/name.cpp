#include "name.h"

using namespace std;
int i = 0;

    bool Name::Validate(std::string name){
        bool flag= std::regex_match(name , std::regex("^[A-Z]{1}[a-z]+(\\s{1}[A-Z]{1}[a-z]+)+"));
        return flag;
    }


    bool Name::Validate(std::string name,int modifier){
        modifier--;
        string n =std::to_string(modifier);
        std::string exp = "^[A-Z]{1}[a-z]+(\\s{1}[A-Z]{1}[a-z]+){" +n +"}";
        bool flag= std::regex_match(name , std::regex(exp));
        return flag;
    }


    std::string Name::Random(int length,int number,int Min_Length,bool x){
        if(length<Min_Length){
            throw std::invalid_argument("Total length less than min length");
        }
        std::string Full_Name;
        srand(time(0)+(i++));
        int gen;
        gen=rand()%(length/number)+Min_Length;
        if(x==1){ 
            for(int k=0;k<number;k++){
                Full_Name+=Generate_Word(gen)+" ";
                if(Full_Name.length()>length)
                    break;
            }
        }
        else
        {
            for(int k=0;k<number;k++){
                Full_Name+=Generate_Invalid_Word(gen)+" ";
                if(Full_Name.length()>length)
                    break;
            }
        }
        Full_Name[Full_Name.length()-1]='\0'; 
        return Full_Name;

    }
    std::string Name::Generate_Word(size_t length){

                auto randchar = []() -> char
        {
            const char charset[] =
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        str[0]=str[0]-32;
        return str;
    }
    std::string Name::Generate_Invalid_Word(size_t length){

        auto randchar = []() -> char
        {
            const char charset[] =
            "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-=+_!@#$%^&*(),.<>/?][{}/|`~";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        if(Validate(str)){
            Generate_Invalid_Word(length);
        }
        return str;
    }