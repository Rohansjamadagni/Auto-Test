#include "Designation.h"

using namespace std;

int main()      {
    Designation d;
//     d.VectorInit();
    d.Add("Janitor");
    d.Add("Ceo");
    cout << d.Validate("Janitor") << endl;
    cout << d.Validate("Ceo") << endl;
    d.Show();
    d.Remove("Ceo");
    d.Show();
    return 0;
}
