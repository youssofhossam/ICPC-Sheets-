#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    long long sum = 0;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}