#include <iostream>
#include <algorithm>
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
    sort(a, a + n);

    int min = a[0];
    int max = a[n - 1];
    int counter = 0;

    int i = 0, j = n - 1;
    while (j > i)
    {
        if (a[i] + a[j] < min + max)
            i++;
        else if (a[i] + a[j] > min + max)
            j--;
        else if (a[i] + a[j] == min + max)
        {
            counter++;
            i++;
            j--;
        }
    }
    cout << counter;
}
