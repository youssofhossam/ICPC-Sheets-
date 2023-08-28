#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    float r;
    cin >> r;
    // int pi = 3.141592653;
    double Area = 3.141592653 * pow(r, 2);
    cout << fixed << setprecision(9) << Area;
    // your code.
}
