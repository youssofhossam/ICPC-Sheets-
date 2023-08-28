#include <iostream>
using namespace std;

int main()
{
    int number, temp, reverse = 0;
    cin >> number;
    temp = number;

    while (number)
    {
        reverse = number % 10 + reverse * 10;
        number /= 10;
    }
    cout << reverse << endl;
    if (temp == reverse)
        cout << "YES";
    else
        cout << "NO";
}