#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 11 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
