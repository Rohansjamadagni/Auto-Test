#include "Description.h"
using namespace std;
int i;

std::string Description::Random(unsigned long long x,int num){
    string description;
    int length;
    srand (time(0)+i++);
    while(description.length()<=x){
        length=rand()%num+1;
        description+=Generate_Word(length)+Generate_Char();
    }
    description[0]-=32;
    for(int j=0;j<description.length();j++){ 
        if(description[j]=='.'){
             description[j+1]-=32;
            }
        }
    description.erase(x,description.length()-1);
    description[description.length()-1] = '.';
    std::cout<<description.length()<<endl;
    return description;
}
std::string Description::Generate_Word(size_t length){

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
    while(str!="")
    return str;
    return (Generate_Word(length));
}
std::string Description::Generate_Char(){
    std::string str[]={" ",".",","," "," "," "};
    int size= *(&str+1)-str;
    srand(time(0)+i++);
    int p=rand()%size;
    return str[p];
}