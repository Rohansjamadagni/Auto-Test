#include "Colour.h"
using namespace std;

int main(){
    Colour c;
    // bool f = c.Validate_Colour("#67ae0b");
    for(int x=0;x<10;x++){ 
    string f=c.Generate_Colour("");
    cout<<f<<endl;
    }
    return 0;
}