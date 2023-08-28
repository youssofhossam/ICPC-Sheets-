#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long x = a * b;
    long long y = c * d;
    long long z = x - y;

    cout << "Difference = " << z << endl;
}