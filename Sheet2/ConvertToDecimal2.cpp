#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int number;
    int remainder;

    for (int i = 0; i < test_cases; i++)
    {
        int counter = 0;
        cin >> number;
        while (number > 0)
        {
            remainder = number % 2;
            number /= 2;
            if (remainder == 1)
                counter++;
        }
        long long sum = 0;
        for (int j = 0; j < counter; j++)
        {
            sum += 1 * pow(2, j);
        }
        cout << sum << endl;
    }
}
