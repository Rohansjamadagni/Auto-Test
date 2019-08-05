#include "company.h"
using namespace std;
int main(){
    Company c;
    // cout<<c.Validate_Company()<<endl;//Every word should be capitalized and seperated by a space
    c.Add("whizchip org");
    cout<<c.Validate("whizchip",1)<<endl;
        // cout<<n.Random_Name(40,5,5,1)<<endl;//Random_name(Max length of Full name,Number of words/surnames , Min length of each word/surname , 0-invalid/1-valid)
    return 0;
}