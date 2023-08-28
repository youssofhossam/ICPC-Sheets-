#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long a = x + y;
    long long b = x * y;
    long long c = x - y;
    cout << x << " + " << y << " = " << a << endl;
    cout << x << " * " << y << " = " << b << endl;
    cout << x << " - " << y << " = " << c << endl;
}
