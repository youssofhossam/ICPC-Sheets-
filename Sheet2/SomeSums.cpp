#include <iostream>
using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum_digit = 0;
        while (num)
        {
            sum_digit += num % 10;
            num /= 10;
        }
        if (sum_digit >= a && sum_digit <= b)
            sum += i;
    }
    cout << sum;
}
