#include "Colour.h"
using namespace std;
int i = 0;

    bool Colour::Validate(std::string colour){
        bool flag= std::regex_match(colour , std::regex("^((#|0x)([A-Fa-f0-9]{6}|[A-Fa-f0-9]{3}))|(^rgb\\((0|255|25[0-4]|2[0-4]\\d|1\\d\\d|0?\\d?\\d),(0|255|25[0-4]|2[0-4]\\d|1\\d\\d|0?\\d?\\d),(0|255|25[0-4]|2[0-4]\\d|1\\d\\d|0?\\d?\\d)\\))"));
        return flag;
    }
    std::string Colour::Random(){
        string colour="";
        colour=Random(colour);
        return colour;
    }

    std::string Colour::Random(std::string type){

        srand(time(0)+i++);
        bool flag;
        int length;
        if(type == ""){
            string TypeArr[]={"0x","hex","short hex","rgb"};
            srand(time(0)+i++);
            int randomNum=rand()%4;
            type=TypeArr[randomNum];
            // cout<<type<<endl;
        }
        if(type=="hex"){
        
            length = 6; 
            string colour = Random_Word(length);
            colour ="#"+colour;
            if(flag=Validate(colour)){
                return colour;
            }
            return Random(type);
            }
        if(type == "short hex"){
    
            length = 3; 
            string colour = Random_Word(length);
            colour ="#"+colour;
            if(flag=Validate(colour)){
                return colour;
            }
            return Random(type);   
        }
        if(type == "rgb"){
      
            srand(time(0)+i++);
            string colour;
            int RGBnumber;
            RGBnumber = rand()%256;
            colour = "rgb("+to_string(RGBnumber)+",";
            i++;
            for(int j=0;j<2;j++){ 
            srand(time(0)+i++);
            RGBnumber = rand()%256;
            colour +=to_string(RGBnumber)+",";
            }
            colour[colour.length()-1]=')';
            if(flag=Validate(colour)){ 
            return colour;
            }
            return Random(type);
        }
        if(type == "0x"){
        
            length = 6; 
            string colour = Random_Word(length);
            colour ="0x"+colour;
            if(flag=Validate(colour)){
                return colour;
            }
            return Random(type);            
        }

        return "";
    }
    std::string Colour::Random_Word(size_t length){

    auto randchar = []() -> char
        {
            const char charset[] =
            "abcdef123456";
            const size_t max_index = (sizeof(charset) - 1);
            
            return charset[ rand() % max_index ];
        };
    std::string str(length,0);
    srand(time(0)+i++);
    std::generate_n( str.begin(), length, randchar );
    while(str!="")
    return str;
    return (Random_Word(length));
}