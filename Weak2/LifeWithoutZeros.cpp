#include <iostream>
using namespace std;

int removingZeros(int number)
{
    int result = 0;
    int multiplayer = 1; // to put the number in its right place

    while (number > 0)
    {
        int digit = number % 10;

        if (digit != 0)
        {
            result += digit * multiplayer;
            multiplayer *= 10;
        }
        number /= 10;
    }
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;
    long long sum = a + b;

    long long x = removingZeros(a);
    long long y = removingZeros(b);
    long long summ = removingZeros(sum);

    if (x + y == summ)
        cout << "YES";
    else
        cout << "NO";
}