#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double ratio = a / b;

    int floor1 = floor(ratio);
    int ceil1 = ceil(ratio);
    int round1 = round(ratio);

    cout << "floor " << a << " / " << b << " = " << floor1 << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil1 << endl;
    cout << "round " << a << " / " << b << " = " << round1 << endl;
}