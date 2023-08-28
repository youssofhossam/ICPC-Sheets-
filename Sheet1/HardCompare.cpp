#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long a, b, c, d;

    cin >> a >> b >> c >> d;

    if (b * log10(a) > d * log10(c))
        cout << "YES";
    else
        cout << "NO";
}
