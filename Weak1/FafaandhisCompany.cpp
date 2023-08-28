#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 1;
    for (int i = 2; i <= (0.5) * n; i++)
    {
        n -= i;
        if (n % i == 0)
            counter++;
        n += i;
    }
    cout << counter;
}