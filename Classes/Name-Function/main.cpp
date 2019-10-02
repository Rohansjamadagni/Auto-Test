#include "name.h"
using namespace std;
int main(){
    Name n;
    cout<<n.Validate("Kiara Anne")<<endl;//Every word should be capitalized and seperated by a space
    for(int x=0;x<10;x++)
        cout<<n.Random(10,5,5,1)<<endl;//Random(Max length of Full name,Number of words/surnames , Min length of each word/surname , 0-invalid/1-valid)
    return 0;
}