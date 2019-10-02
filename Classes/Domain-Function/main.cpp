#include "domain.h"
using namespace std;
int main(){
    Domain d;
    d.Add("GoDaddy.com","specific");
    cout<< d.Validate("GoDaddy.com","generic");
    return 0;
}