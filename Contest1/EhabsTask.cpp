#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < n - 1; i++)
    {
        int minimum = min(array[i], array[i + 1]);
        array[i] -= minimum;
        array[i + 1] -= minimum;
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "YES";
}