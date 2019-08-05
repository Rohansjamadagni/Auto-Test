#include "email.h"

using namespace std;
int i =0;

    bool Email::Check_Validity(std::string email){
        bool valid = std::regex_match(email, std::regex("^[_a-zA-Z0-9-]+(\\.[_a-zA-Z0-9-]+)*@[a-zA-Z0-9-]+(\\.[a-zA-Z0-9-]+)*\\.(([0-9]{1,3})|([a-zA-Z]{2,3}))") );

        for(auto i=0;i<email.size();i++){
            if((email[i]==email[i+1])&&email[i]=='.')
                return 0;
        }

        return (valid);
    }
    std::string Email::Random(int x){
        srand(time(0)+(i++));
        int randNlength,randDlength;
        randNlength=rand()%5+6;
        randDlength=rand()%3+4;
        std::string email;
        email = Random_Name(randNlength)+"@"+Random_Domain(randDlength)+".com";
        cout<<email<<endl;
        if(Check_Validity(email)!=x){
            Random(x);
        }
        return email;
        
    }
    std::string Email::Random_Name( size_t length )    {   
        auto randchar = []() -> char
        {
            const char charset[] =
            "0123456789"
            "._@#"
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            return charset[ rand() % max_index ];
        };
        std::string str(length,0);
        srand(time(0)+i++);
        std::generate_n( str.begin(), length, randchar );
        return str;
    }

    std::string Email::Random_Domain( size_t length )
    
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

    bool Email::Validate(std::string email){
        std::string domain;
        domain=Get_Info(email,"domain");
        if(Check_Validity(email)){
           for(auto j=domains.begin();j!=domains.end();++j){
                if(*j==domain){
                    return 1;
                }
            } 
        }
        else
        {
            throw invalid_argument("Invalid Email format");
        }
        return 0;
        
    }

    bool Email::Validate(std::string email,std::string key){
        std::string domain;
        domain=Get_Info(email,"domain");
        if(Check_Validity(email)){
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

    void Email::Remove(std::string domain){
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
    void Email::Remove(std::string domain,std::string key){
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
    
    void Email::Add(std::string domain){
    
        domains.push_back(domain);
        
    }

    void Email::Add(std::string domain, std::string key){
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

    void Email::Show(){
        for(auto i=0;i<domains.size();i++)
            cout<<domains.at(i)<<endl;
    }
    void Email::Show(string key){
        if(key=="generic")
            Show_Generic_Domains();
        else if(key=="specific")
            Show_Specific_Domains();
        else
            throw invalid_argument("Invalid info");
        
        }


    void Email::Show_Generic_Domains(){
        for(auto i=0;i<generic_domains.size();i++)
            cout<<generic_domains.at(i)<<endl;
    }

    void Email::Show_Specific_Domains(){
        for(auto i=0;i<specific_domains.size();i++)
            cout<<specific_domains.at(i)<<endl;
    }

    string Email::Get_Info(std::string email,std::string option){
            char name1[50]="",domain1[50]="";
            string name,domain;
            int posat,posdot,i;
            for(i=0;i<email.size();i++){
                if(email[i]=='@')
                    posat = i;
            }
            email.copy(name1,posat,0);
            email.copy(domain1,email.size(),posat+1);
            name=name1;
            domain=domain1;
            if(option=="name")
                return name; 
            else if(option!="domain")
                throw invalid_argument("Invalid info");
            return domain;
    }
