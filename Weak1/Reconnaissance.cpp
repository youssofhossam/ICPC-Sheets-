#include <iostream>
using namespace std;

int main()
{
    int num_soldiers, max_hight;
    cin >> num_soldiers >> max_hight;
    int array[num_soldiers];

    for (int i = 0; i < num_soldiers; i++)
    {
        cin >> array[i];
    }

    long long counter = 0;
    for (int i = 0; i < num_soldiers; i++)
    {
        for (int j = num_soldiers - 1; j > i; j--)
        {
            if ((abs(array[i] - array[j]) <= max_hight))
            {
                counter += 2;
            }
        }
    }
    cout << counter;
}
