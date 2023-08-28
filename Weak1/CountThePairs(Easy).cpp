#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = 1000000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == min + max)
                counter++;
        }
    }
    cout << counter;
}