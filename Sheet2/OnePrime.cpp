#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int number;
    cin >> number;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}