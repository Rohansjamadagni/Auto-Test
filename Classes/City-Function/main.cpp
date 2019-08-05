#include "city.h"
using namespace std;

int main(){
    City c;
    c.Add_City("Bangalore");
    c.Add_City("Mumbai");
    // cout<<c.Validate_City("B","bro")<<endl;
    c.Show_City();
    c.Remove_City("Bangalore");
    c.Show_City();
    return 0;
}