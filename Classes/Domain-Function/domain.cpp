#include "domain.h"

using namespace std;
int i =0;

    bool Domain::Check_Validity(std::string domain){
        bool valid = std::regex_match(domain, std::regex("^[\\w\\d]+(\\.[\\w\\d]+)*\\.(([0-9]{1,3})|([a-zA-Z]{2,3}))") );
        return (valid);
    }
    std::string Domain::Random(int x){
        srand(time(0)+(i++));
        int randDlength;
        randDlength=rand()%(4)+4;
        std::string domain;
        do{
        domain = Random_Word(randDlength)+Random_Ext();
        }while(Check_Validity(domain)!=x);
            
        
        return domain;
        
    }
    std::string Domain::Random_Ext() {   
        std::string str[] = {".net",".com",".in"};
        int size = *(&str + 1) - str;
        srand(time(0)+i++);
        int p = rand()%(size);
        return str[p];
    }

    std::string Domain::Random_Word( size_t length )
    
    {   
        auto randchar = []() -> char
        {
            const char charset[] =
            "0123456789"
            "._#*&@"
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }

    bool Domain::Validate(std::string domain){
        if(Check_Validity(domain)){
           for(auto j=domains.begin();j!=domains.end();++j){
                if(*j==domain){
                    return 1;
                }
            } 
        }
        else
        {
            throw invalid_argument("Invalid Domain format");
        }
        return 0;
        
    }

    bool Domain::Validate(std::string domain,std::string key){
        if(Check_Validity(domain)){
            if(key=="generic"){
                for(auto j=generic_domains.begin();j!=generic_domains.end();++j){
                    if(*j==domain){
                        return 1;
                    }
                }
            }
            else if(key=="specific"){
                for(auto j=specific_domains.begin();j!=specific_domains.end();++j){
                    if(*j==domain){
                        return 1;
                    }
                }
            }
            else
            {
                throw invalid_argument("Key must be 'generic' or 'specific'");
            }
                 
        }
        else
        {
            throw invalid_argument("Invalid Email format");
        }
        return 0;
    }

    void Domain::Remove(std::string domain){
        bool flag=1;
        for(auto j=domains.begin();j!=domains.end();++j){
            if(*j==domain){
                flag=0;
                domains.erase(j);
                break;
            }
        }

        if(flag)
            throw invalid_argument("Domain does not exist");
            
    }
    void Domain::Remove(std::string domain,std::string key){
        bool flag=1;
        
        if(key=="specific"){
            for(auto j = specific_domains.begin();j!=specific_domains.end();++j){
                if(*j==domain){
                    flag=0;
                    specific_domains.erase(j);
                    break;
                }
            }
            if(flag)
                throw invalid_argument("Domain does not exist");
            for(auto k=domains.begin();k!=domains.end();++k){
                if(*k==domain){
                    flag=0;
                    domains.erase(k);
                    break;

                }
            }
        }
        else if(key=="generic"){
           for(auto j=generic_domains.begin();j!=generic_domains.end();++j){
                if(*j==domain){
                    flag=0;
                    generic_domains.erase(j);
                    break;
                }
            }
            if(flag)
                throw invalid_argument("Domain does not exist");
            for(auto j=domains.begin();j!=domains.end();++j){
                if(*j==domain){
                    flag=0;
                    domains.erase(j);
                    break;
                }
            } 
        }
        else
            throw invalid_argument("Key must be 'generic' or 'specific'!");
        
        
        
            
    }
    
    void Domain::Add(std::string domain){
    
        domains.push_back(domain);
        
    }

    void Domain::Add(std::string domain, std::string key){
        if(key=="specific"){
            domains.push_back(domain);
            specific_domains.push_back(domain);
        }
        else if(key=="generic"){
            domains.push_back(domain);
            generic_domains.push_back(domain);
        }
        else       
            throw invalid_argument("Key must be 'generic' or 'specific'!");
        
                
    }

    void Domain::Show(){

        for(auto i=0;i<domains.size();i++)
            cout<<domains.at(i)<<endl;
    }

    void Domain::Show(std::string key){
        if(key=="generic"){
        for(auto i=0;i<generic_domains.size();i++)
            cout<<generic_domains.at(i)<<endl;
        }
        else if(key=="specific"){
            for(auto i=0;i<specific_domains.size();i++)
            cout<<specific_domains.at(i)<<endl;
        }
        else{
            throw invalid_argument("Invaid key");
        }
    }

    

