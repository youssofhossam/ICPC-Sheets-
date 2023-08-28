#include <iostream>

using namespace std;

int main()
{
    int counter;
    cin >> counter;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 1; i <= counter; i++)
    {
        int number;
        cin >> number;
        if (number % 2 == 0)
            even++;
        else if (number % 2 != 0)
            odd++;
        if (number > 0)
            positive++;
        else if (number < 0)
            negative++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}