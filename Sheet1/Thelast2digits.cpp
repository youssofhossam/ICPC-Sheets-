#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b, c, d, result;

    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    result = (a * b * c * d) % 100;

    if (result < 10)
        cout << 0 << result;
    else
        cout << result;
}