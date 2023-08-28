#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if (s == '+' && q == '=' && a + b == c)
        cout << "Yes" << endl;

    else if (s == '-' && q == '=' && a - b == c)
        cout << "Yes" << endl;

    else if (s == '*' && q == '=' && a * b == c)
        cout << "Yes" << endl;
    else if (s == '+' && q == '=' && a + b != c)
        cout << a + b << endl;
    else if (s == '-' && q == '=' && a - b != c)
        cout << a - b << endl;
    else if (s == '*' && q == '=' && a * b != c)
        cout << a * b << endl;
}