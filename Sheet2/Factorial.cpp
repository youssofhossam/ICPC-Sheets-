#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned int counter;
    cin >> counter;

    while (counter--)
    {
        unsigned int number;
        cin >> number;
        long long result = 1;
        for (int i = 1; i <= number; i++)
        {
            result *= i;
        }
        cout << result << endl;
    }
}