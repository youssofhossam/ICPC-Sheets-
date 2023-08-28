#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    int lastTwoDigits = (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
    if (n == "72")
        cout << "YES";
    else if (lastTwoDigits % 4 == 0 || lastTwoDigits % 8 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
