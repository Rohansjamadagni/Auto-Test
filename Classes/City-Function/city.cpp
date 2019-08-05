#include "city.h"
using namespace std;
int i;
std::string City::Random(int x){
    srand(time(0)+i++);
    string city;
    bool f;
    int length;
    length = rand()%25+x;
    city=Generate(length);
    if(f=Validate(city)){
        return city;
    }
    i++;
    return City::Generate(x);

}
bool City::Validate(string city){

    bool valid = std::regex_match(city , std::regex("^[A-Z]{1}[a-z]+"));
    return valid;

}

std::string City::Generate(size_t length){
        auto randchar = []() -> char
        {
            const char charset[] =
            // "0123456789"
            // "._@#"
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
bool City::Validate(string city,string check){
            if(Validate(city)){
           for(auto j=cities.begin();j!=cities.end();++j){
                if(*j==city){
                    return 1;
                }
            } 
        }
        else
        {
            throw invalid_argument("Invalid city");
        }
        return 0;

}


void City::Add(string city){
            cities.push_back(city);
}

void City::Remove(std::string city){

    bool flag=1;
    for(auto j = cities.begin();j!=cities.end();++j){
        if(*j == city){
            flag=0;
            cities.erase(j);
            break;
        }
        if(flag==1){
        cout<<"City doesnt exist"<<endl;
        }
    }

}
void City::Show(){
    for(auto j=0;j<cities.size();j++)
        cout<<cities.at(j)<<endl;
}