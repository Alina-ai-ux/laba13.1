#include <iostream>
#include <math.h>
#include <iomanip>   //
#include  "dod.h"
#include  "sum.h"
#include  "var.h"

using namespace std;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;
// --------------------------------------------
int main()
{
 //   int n;     //
 //   double x, x_p, x_k, dx, eps, a, s; //
    cout << "enter x_p= ";  cin >> x_p;
    cout << "enter x_k= ";  cin >> x_k;
    cout << "enter dx= ";  cin >> dx;
    cout << "enter eps= ";  cin >> eps;
    x = x_p;
    cout << "========================================================="
        << endl;
    cout << "|       x       |      s       |   log(x+1)  |     n    |"
        << endl;
    cout << "========================================================="
        << endl;
    while (x <= x_k)
    {
        sum();
        cout << "| " << setw(13) << left << x << " ";
        cout << "| " << setw(13) << left << s
            << "| " << setw(12) << left << log(x + 1)
            << "| " << setw(9) << left << n
            << "| " << endl;
        cout << "_________________________________________________________"
            << endl;
        x = x + dx;
    }
    cin.get();   //
    return 0;
}
