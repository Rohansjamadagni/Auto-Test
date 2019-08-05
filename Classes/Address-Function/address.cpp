#include "address.h"
using namespace std;
int i = 0;

bool Address::Validate(std::string address){
    bool valid = std::regex_match(address, std::regex("^(#[\\d]+)(\\s[A-Z0-9][A-Za-z0-9]+){2}"));
    return valid;
}

std::string Address::Random(int x){
    std::string word1,word2,word3,address;
    srand(time(0)+i++);
    int Dnum= rand()%9999+1;
    if(x){
        word1 = Random_Word(rand()%4+4);
        word1[0]= toupper(word1[0]);
        srand(time(0)+i++);
        word2 = Random_Word(rand()%4+4);
        word2[0] = toupper(word2[0]);
        address = "#"+to_string(Dnum) + " " + word1 + " "+ word2;
    }
    else{
        do{
            word1 = Random_Invalid_Word(rand()%4+4);
            srand(time(0)+i++);
            word2 = Random_Invalid_Word(rand()%4+4);
            srand(time(0)+i++);
            word3 = Random_Invalid_Word(rand()%4+4);
            address = word3 + " " + word1 + " "+ word2;
        }while(Check_Validity(address));
    }
    return address;
}

std::string Address::Random_Word( size_t length )
    
    {   
        auto randchar = []() -> char
        {
            const char charset[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }
std::string Address::Random_Invalid_Word( size_t length )
    
    {   
        auto randchar = []() -> char
        {
            const char charset[] =
            "1234567890!@#$%^&*()_+={}[]\\|><?/.,~` "
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }
