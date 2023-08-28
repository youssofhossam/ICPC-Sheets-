#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
        cout << "0";
    else
    {
        cout << abs(b - a) << " ";
        if (a > b)
            cout << "R";
        else
            cout << "L";
    }
}