#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 2; i <= number; i++)
    {
        bool prime = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = true;
                break;
            }
        }
        if (prime == false)
            cout << i << " ";
    }
}
