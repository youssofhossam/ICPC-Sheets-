#include <iostream>
using namespace std;

int main()
{
    int t, count = 0, num1 = 1;
    cin >> t;

    for (int x = 1; x <= t; x++)
    {
        for (int j = t - 1; j >= x; j--)
            cout << " ";

        for (int i = 1; i <= num1; i++)
        {
            cout << "*";
        }
        cout << endl;
        num1 += 2;
    }
    // ======
    int num2 = 2 * t - 1;
    for (int y = 1; y <= t; y++)
    {
        for (int z = 2; z <= y; z++)
            cout << " ";

        for (int v = num2; v >= 1; v--)
        {
            cout << "*";
        }
        cout << endl;
        num2 -= 2;
    }
}