#include <iostream>
using namespace std;

int main()
{
    int t, num = 1, count = 0;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        for (int j = t - 1; j >= x; j--)
            cout << " ";

        for (int i = 1; i <= num; i++)
        {
            cout << "*";
        }
        cout << endl;
        num += 2;
    }
}