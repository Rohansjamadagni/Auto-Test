#include "designation.h"

using namespace std;

int main()      {
    Designation d;
    d.Add("CEO");
    d.VectorInit();
    cout << d.Validate("CEO") << endl;
    return 0;
}