#include "date.h"
const int MAX_VALID_YR = 9999; 
const int MIN_VALID_YR = 1800; 
bool boo,flag;
int d,m,y,key,number,s;

using namespace std;


            std::string Date::Add(std::string s1,int s2){

                bool flag1,flag2;
                Date d1,d2,d3;

                char ch1[s1.size() + 1];
                s1.copy(ch1, s1.size() + 1);
                ch1[s1.size()] = '\0';

                d2.d=s2;

                flag1=d1.setval(ch1);
                
                if(flag1){
                    d3=d1+d2;
                 } 
                 else
                 {
                     throw invalid_argument("Invalid Date");
                 }
                 
                    return(d3.rdate);
                    
                }
            std::string Date::Subtract(std::string s1,int s2){

                bool flag1,flag2;
                Date d1,d2,d3;
                
                char ch1[s1.size() + 1];
                s1.copy(ch1, s1.size() + 1);
                ch1[s1.size()] = '\0';

                d2.d=s2;

                flag1=d1.setval(ch1);
                
                if(flag1){
                    d3=d1-d2;
                 } 
                 else
                 {
                     throw invalid_argument("Invalid Date");
                 }
                 
                    return(d3.rdate);
                    
                }

            bool Date::Validate(std::string s1){

                bool a;
                char ch1[s1.size() + 1];
                s1.copy(ch1, s1.size() + 1);
                ch1[s1.size()] = '\0';
                Date d1;
                a=d1.setval(ch1);
                return a;
                
                }

            void Date::Compare(std::string s1,std::string s2){

                bool a,flag1,flag2;
                Date d1,d2,d3;
      
                char ch1[s1.size() + 1];
                s1.copy(ch1, s1.size() + 1);
                ch1[s1.size()] = '\0';

                char ch2[s2.size() + 1];
                s2.copy(ch2, s2.size() + 1);
                ch2[s2.size()] = '\0';


                flag1=d1.setval(ch1);
                flag2=d2.setval(ch2);
                if(flag1 && flag2){
                    d3=(d1<d2);
                    a=d3.getVal();
                    if(a==false)
                        cout<<"The First date is earlier\n";
                    else
                        cout<<"The First date is later\n";
                }
                else
                    throw std::invalid_argument ("Invalid Dates");
                
                }

            bool Date::equalTo(std::string s1,std::string s2){

                bool a,flag1,flag2;
                Date d1,d2,d3;

                char ch1[s1.size() + 1];
                s1.copy(ch1, s1.size() + 1);
                ch1[s1.size()] = '\0';

                char ch2[s2.size() + 1];
                s2.copy(ch2, s2.size() + 1);
                ch2[s2.size()] = '\0';

                flag1=d1.setval(ch1);
                flag2=d2.setval(ch2);
                
                if(flag1&&flag2){
                    d3=d1==d2;
                    a=d3.getVal();
                    
                                      
                }
                
                else
                    throw std::invalid_argument ("Invalid Dates");
                return a;
                
            }

            std::string Date::subDays(int d1, int m1, int y1, int x){
             
                int offset1 = offsetDays(d1, m1, y1); 
                int remDays = isLeap(y1)?(366-offset1):(365-offset1); 
            
                // y2 is going to store result year and 
                // offset2 is going to store offset days 
                // in result year. 
                int y, offset2; 
                if (x <= offset1) 
                { 
                    y = y1; 
                    offset2 = offset1 - x; 
                } 
        
                else
                { 
                // x may store thousands of days. 
                // We find correct year and offset 
                // in the year.
                    x -=offset1;  
                    y = y1 - 1; 
                    int y2days = isLeap(y)?366:365; 
                    while (x >= y2days) 
                        { 
                            x -= y2days; 
                            y--; 
                            y2days = isLeap(y)?366:365; 
                        } 
                    offset2 = y2days - x; 
                } 
                // Find values of day and month from
                // offset of result year. 
                int m, d; 
                revoffsetDays(offset2, y, &d, &m); 
                std::string date;
                if(m<10&&d<10)
                    date="0"+to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y);
                else if(m<10&&d>=10)
                    date=to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y); 
                else if(m>=10&&d<10)
                    date="0"+to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                else
                    date=to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                rdate=date;
                return date;
                
                }    
            
            std::string Date::addDays(int d1, int m1, int y1, int x){

             
                int offset1 = offsetDays(d1, m1, y1); 
                int remDays = isLeap(y1)?(366-offset1):(365-offset1); 
            
                // y2 is going to store result year and 
                // offset2 is going to store offset days 
                // in result year. 
                int y, offset2; 
                if (x <= remDays) 
                { 
                    y = y1; 
                    offset2 = offset1 + x; 
                } 
            
                else
                { 
                    // x may store thousands of days. 
                    // We find correct year and offset 
                    // in the year. 
                    x -= remDays; 
                    y = y1 + 1; 
                    int y2days = isLeap(y)?366:365; 
                    while (x >= y2days) 
                    { 
                        x -= y2days; 
                        y++; 
                        y2days = isLeap(y)?366:365; 
                    } 
                    offset2 = x; 
                } 
            
                // Find values of day and month from 
                // offset of result year. 
                int m, d; 
                revoffsetDays(offset2, y, &d, &m); 
                std::string date;
                if(m<10&&d<10)
                    date="0"+to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y);
                else if(m<10&&d>=10)
                    date=to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y); 
                else if(m>=10&&d<10)
                    date="0"+to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                else
                    date=to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                rdate=date;
                
                return date;
                
                }    

            // Given a date, returns number of days elapsed 
            // from the  beginning of the current year (1st 
            // jan). 
            int Date::offsetDays(int d, int m, int y) 
            { 
                int offset = d; 
            
                switch (m - 1) 
                { 
                case 11: 
                    offset += 30; 
                    
                case 10: 
                    offset += 31;
                    
                case 9: 
                    offset += 30;
                    
                case 8: 
                    offset += 31;
                    
                case 7: 
                    offset += 31; 
                    
                case 6: 
                    offset += 30;
                    
                case 5: 
                    offset += 31;
                    
                case 4: 
                    offset += 30;
                     
                case 3: 
                    offset += 31;
                      
                case 2: 
                    offset += 28;
                     
                case 1: 
                    offset += 31;
                     
                } 
            
                if (isLeap(y) && m > 2) 
                    offset += 1; 
            
                return offset; 
            } 
            
            // Given a year and days elapsed in it, finds 
            // date by storing results in d and m. 
            void Date::revoffsetDays(int offset, int y, int *d, int *m) 
            { 
                int month[13] = { 0, 31, 28, 31, 30, 31, 30, 
                                31, 31, 30, 31, 30, 31 }; 
            
                if (isLeap(y)) 
                    month[2] = 29; 
            
                int i; 
                for (i = 1; i <= 12; i++) 
                { 
                    if (offset <= month[i]) 
                        break; 
                    offset = offset - month[i]; 
                } 
            
                *d = offset; 
                *m = i; 
            } 


            bool Date::isLeap(int year) 
            { 
            // Return true if year 
            // is a multiple pf 4 and 
            // not multiple of 100. 
            // OR year is multiple of 400. 
            return (((year % 4 == 0) && 
                    (year % 100 != 0)) || 
                    (year % 400 == 0)); 
            } 


            void Date::ConvertToTen(char a[]){
                a[9]=a[7];
                a[8]=a[6];
                a[6] ='2';
                a[7]='0';   
            }


            bool Date::getVal(void){

                return boo;
            }

            bool Date::setval(std::string s1){
                int a,b;
                char dt[s1.size() + 1];
                s1.copy(dt, s1.size() + 1);
                dt[s1.size()] = '\0';
                if(strlen(dt)==8)
                    ConvertToTen(dt);
                key=type(dt);
                number=remover(dt);
               
                if(key==0){
                    d=number;
                }
                if(key==1||key==2){

                        y=number%10000;
                        number /=10000;
                        b=number%100;
                        number /=100;
                        a=number;

                        if(b>12){

                            d=b;
                            m=a;

                        }
                        else{

                            d=a;
                            m=b;
                        }

                    }
                if(key==4){

                        a=number%100;
                        number /=100;
                        b=number%100;
                        number /=100;
                        y=number;
                        if(b>12){

                            d=b;
                            m=a;

                        }
                        else{

                            d=a;
                            m=b;
                        }


                    }
                    
                    // If year, month and day 
                    // are not in given range 
                    if (y > MAX_VALID_YR || 
                        y < MIN_VALID_YR){ 
                        flag=false; 
                        return flag;
                    }
                    if (m < 1 || m > 12){ 
                        flag=false;
                        return flag; 
                    }
                    if (d < 1 || d > 31){ 
                        flag=false; 
                        return flag;
                    }
                    
                    // Handle February month 
                    // with leap year 
                    if (m == 2) 
                    { 
                        if (isLeap(y)){ 
                            flag=(d<=29);
                            return flag;
                        } 
                        else{
                            flag=(d<=28);
                            return flag;
                        } 
                    } 

                    // Months of April, June, 
                    // Sept and Nov must have 
                    // number of days less than 
                    // or equal to 30. 
                    if (m == 4 || m == 6 || 
                        m == 9 || m == 11) {
                        flag=(d<=30); 
                        }
                    else
                        flag=true;
                    
                    return flag;

                    }

                void Date::removeChar(char *s, int c){

                    int j, n = strlen(s);
                    for (int i=j=0; i<n; i++)
                    if (s[i] != c)
                        s[j++] = s[i];

                    s[j] = '\0';
                }

                int Date::remover(char dt[]){

                    int x;
                    removeChar(dt, '-');
                    removeChar(dt, '/');
                    removeChar(dt,' ');
                    
                    sscanf(dt, "%d", &x);
                    
                    return x;

                    }

                int Date::type(char dt[]){

                    for(int i=0;i<10;i++){
                        if(dt[i] =='-'|| dt[i]=='/'){
                            return i;

                        }

                    }
                    return 0;
                }

                std::string Date::GetAge(std::string date){
                    string retdate;
                    int numofdays=0,numofmonths=0,numofyears=0;
                    Date d1;
                    int dc,mc,yc;
                    time_t now = time(0);
                    tm *ltm = gmtime(&now);
                    dc=ltm->tm_mday;
                    mc=1 + ltm->tm_mon;
                    yc=1900 + ltm->tm_year;
                    char cstr[date.size() + 1];
                    date.copy(cstr, date.size() + 1);
                    cstr[date.size()] = '\0';
                    d1.setval(cstr);
                    int month[13] = { 0, 31, 28, 31, 30, 31, 30, 
                    31, 31, 30, 31, 30, 31 }; 
                    if (isLeap(y)) 
                        month[2] = 29;
                    if(yc-d1.y>1){
                         numofdays=month[d1.m]-d1.d;
                        d1.m++;
                         numofmonths=12-d1.m;
                         numofyears= yc-d1.y-1;
                         numofmonths+=mc;
                         numofdays+=dc;
                        
                        if(numofdays>30){
                            numofdays-=30;
                            numofmonths++;
                            if(numofdays>30){
                                numofdays-=30;
                                numofmonths++;
                            }
                        }
                        if(numofmonths>=12){
                            numofmonths-=12;
                            numofyears++;
                            if(numofmonths>=12){
                                numofmonths-=12;
                                numofyears++;
                            }
                        }
                        
                        

                    }
                    else{
                        numofdays=(month[d1.m]-d1.d)+dc;
                        d1.m++;
                        if(yc-d1.y==1)
                            numofmonths=(12-d1.m)+mc;
                        else
                        {
                            numofmonths=mc-d1.m;
                        }
                        
                        if(numofmonths>=12){
                            numofmonths-=12;
                            numofyears++;
                        }
                        if(numofdays>30){
                            numofdays-=30;
                            numofmonths++;
                        }
                    }

                    if(d1.d>dc&&d1.m>mc&&d1.y>yc)
                        return ("date is after today");
                    else{
                        retdate=(to_string(numofyears)+" years "+to_string(numofmonths)+" months "+to_string(numofdays)+" days");
                        return retdate;
                    }
                        
                    


                }




                std::string Date::Random(std::string date,int x){
                    Date d1,d2,d3;
                    bool f;
                    char cstr[date.size() + 1];
                    date.copy(cstr, date.size() + 1);
                    cstr[date.size()] = '\0';
                    d1.setval(cstr);
                    if(flag==1){
                        if(x==1){
                            do{
                                srand (time(0)+s);
                                d2.d=(rand()%31) +1;
                                d2.m=(rand()%12+1);
                                d2.y=(rand()%1000+1100);
                                d3=d1<d2;
                                s++;
                                f=d3.getVal();
                            }while (f==1);
                        }
                        else if(x==0){
                            do{
                                srand (time(0)+s);
                                d2.d=(rand()%31) +1;
                                d2.m=(rand()%12+1);
                                d2.y=(rand()%1000+1100);
                                d3=d1<d2;
                                s++;
                                f=d3.getVal();
                            }while (f==0);

                            
                        }
                        if(d2.m<10&&d2.d<10)
                            date="0"+to_string(d2.d)+"-"+"0"+to_string(d2.m)+"-"+to_string(d2.y);
                        else if(d2.m<10&&d2.d>=10)
                             date=to_string(d2.d)+"-"+"0"+to_string(d2.m)+"-"+to_string(d2.y); 
                        else if(d2.m>=10&&d2.d<10)
                            date="0"+to_string(d2.d)+"-"+to_string(d2.m)+"-"+to_string(d2.y);
                        else
                            date=to_string(d2.d)+"-"+to_string(d2.m)+"-"+to_string(d2.y);
                                      
                    }
                    else
                        throw std::invalid_argument ("Invalid Dates");
                    return date;

                }


                  
                std::string Date::Random(string date1,string date2){
                    Date d1,d2;
                    bool f1,f2;
                    bool f;
                    string date;
                    int d,m,y;
                    char cstr1[date1.size() + 1];
                    date1.copy(cstr1, date1.size() + 1);
                    cstr1[date1.size()] = '\0';
                    char cstr2[date2.size() + 1];
                    date2.copy(cstr2, date1.size() + 1);
                    cstr2[date2.size()] = '\0';
                    f1 = d1.setval(cstr1);
                    f2 = d2.setval(cstr2);
                    if(f1&&f2){
                        s++;
                        srand (time(0)+s);
                        if(d1.d==d2.d && d1.m!=d2.m){
                            d=(rand()%31) +1;
                            m=(rand()%(d2.m-d1.m)+d1.m);
                        }
                        else if(d1.d==d2.d && d1.m==d2.m){
                            d=(rand()%31) +1;
                            m=(rand()%12+1);
                        }
                        else if(d1.m==d2.m && d1.d!=d2.d){
                            d=(rand()%(d2.d-d1.d)+d1.d);
                            m=(rand()%12+1);
                        }
                        else{
                            d=(rand()%(d2.d-d1.d)+d1.d);
                            m=(rand()%(d2.m-d1.m)+d1.m);
                        }
                        y=(rand()%(d2.y-d1.y)+d1.y);
                        if(m<10&&d<10)
                            date="0"+to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y);
                        else if(m<10&&d>=10)
                            date=to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y); 
                        else if(m>=10&&d<10)
                            date="0"+to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                        else
                            date=to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                        char cstr[date.size() + 1];
                        date.copy(cstr, date.size() + 1);
                        cstr[date.size()] = '\0';
                        if((f=setval(cstr))==0){
                            s++;
                            Date::Random(date1,date2);
                        }
                        
                     }else{
                         throw invalid_argument("Invalid dates");
                     }
                     return date;
                    }


                std::string Date::Random(){
                    bool f;
                    int d,m,y;
                    string date;
                    s++;
                    srand (time(0)+s);
                    d=(rand()%31) +1;
                    m=(rand()%12+1);
                    y=(rand()%1000+1101);
                    if(m<10&&d<10)
                        date="0"+to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y);
                    else if(m<10&&d>=10)
                         date=to_string(d)+"-"+"0"+to_string(m)+"-"+to_string(y); 
                    else if(m>=10&&d<10)
                         date="0"+to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                    else
                        date=to_string(d)+"-"+to_string(m)+"-"+to_string(y);
                    
                    char cstr[date.size() + 1];
                    date.copy(cstr, date.size() + 1);
                    cstr[date.size()] = '\0';
                    if((f=setval(cstr))==0){
                        s++;
                        Date::Random();
                    }
                    
                        return date;
                        
                    

                }


                Date Date::operator==(const Date& x){ 
                    Date obj;
                    if(this->d==x.d && this->m==x.m && this->y==x.y)
                        obj.boo=true;
                    else
                        obj.boo=false;
                    
                    return obj;
                }

                Date Date::operator-(const Date& x){

                    Date obj;
                    obj.rdate=subDays(this->d,this->m,this->y,x.d);
                    return obj;
                    }

                Date Date::operator+(const Date& x){
                    Date obj;
                    obj.rdate = addDays(this->d,this->m,this->y,x.d);
                    return obj;
                }

                Date Date::operator<(const Date& x){
                    Date obj;
                    if(this->y > x.y)
                        obj.boo=true;
                    else if(this->y<x.y)
                        obj.boo=false;
                    else{
                        if(this->m>x.m)
                            obj.boo=true;
                        else if(this->m<x.m)
                            obj.boo=false;
                        else{
                            if(this->d>x.d)
                                obj.boo=true;
                            else if(this->d<x.d)
                                obj.boo=false;
                            }   
                        }
                    return obj;
                }

               