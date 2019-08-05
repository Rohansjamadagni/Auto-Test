#include "name.h"
using namespace std;
int main(){
    Name n;
    cout<<n.Validate("Kiara Anne Frank",3)<<endl;//Every word should be capitalized and seperated by a space
    for(int x=0;x<10;x++)
        cout<<n.Random(40,5,5,1)<<endl;//Random_name(Max length of Full name,Number of words/surnames , Min length of each word/surname , 0-invalid/1-valid)
    return 0;
}