#include <iostream>
using namespace std;

int main()
{
    int t;
    int number, rev = 0, temp;
    cin >> t;
    while (t--)
    {
        cin >> number;
        if (number == 0)
        {
            cout << 0 << " " << endl;
        }
        else
        {
            while (number)
            {
                cout << number % 10 << " ";
                number /= 10;
            }
            cout << endl;
        }
    }
}