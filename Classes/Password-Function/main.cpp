#include "password.h"
using namespace std;
int main(){
    Password p;
    cout<<p.Check_Capital_Password("ROhan")<<endl;
    cout<<p.Check_SpecialChar_Password("^12K45")<<endl;
    for(int i=0;i<10;i++)
    cout<<p.Random_Password(10,20)<<endl;
}