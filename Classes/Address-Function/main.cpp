#include "address.h"
using namespace std;
int main(){
    Address e;
    cout<<e.Check_Validity("#2400 Bananshankari 2ndstage")<<endl;
    for(int i=0;i<10;i++)
    cout<<e.Generate_Address(1)<<" "<<e.Check_Validity(e.Generate_Address(1))<< endl;
    return 0;
}