#include "company.h"

using namespace std;
int i = 0;

    bool Company::Validate(std::string company){
        bool flag= std::regex_match(company , std::regex("^[A-Za-z0-9]+(\\s{1}[A-Za-z0-9]+)*"));
        return flag;
    }


    bool Company::Validate(std::string company,int modifier){
        modifier--;
        string n=to_string(modifier);
        std::string exp = "^[A-Za-z0-9]+(\\s{1}[A-Za-z0-9]+){" +n +"}";
        bool flag= std::regex_match(company , std::regex(exp));
        return flag;
    }
    bool Company::Validate(string company,string check){
            if(Validate(company)){
           for(auto j=companies.begin();j!=companies.end();++j){
                if(*j==company){
                    return 1;
                }
            } 
        }
        else
        {
            throw invalid_argument("Invalid company");
        }
        return 0;

    }        


    std::string Company::Random(int length,int number,int Min_Length,bool x){
        if((length<Min_Length)||(Min_Length*number>=length)){
            throw std::invalid_argument("Invalid lengths");
        }
        std::string Full_Company;
        srand(time(0)+(i++));
        int gen;
        gen=rand()%(length/number)+Min_Length;
        if(gen>length)
            gen=length;
        if(x==1){ 
            for(int k=0;k<number;k++){
                Full_Company+=Generate(gen)+" ";
                    if(Full_Company.length()+gen>=length)
                    break;
            }
        }
        else
        {
            for(int k=0;k<number;k++){
                Full_Company+=Generate_I(gen)+" ";
                if(Full_Company.length()>length)
                    break;
            }
        }
        Full_Company[Full_Company.length()-1]='\0'; 
        return Full_Company;

    }
    std::string Company::Generate(size_t length){

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
    std::string Company::Generate_I(size_t length){

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
            Generate_I(length);
        }
        return str;
    }
void Company::Add(string company){
    companies.push_back(company);
}
void Company::Remove(std::string company){

    bool flag=1;
    for(auto j = companies.begin();j!=companies.end();++j){
        if(*j == company){
            flag=0;
            companies.erase(j);
            break;
        }
        if(flag==1){
        cout<<"Company doesnt exist"<<endl;
        }
    }

}
void Company::Show(){
    for(auto j=0;j<companies.size();j++)
        cout<<companies.at(j)<<endl;
}
