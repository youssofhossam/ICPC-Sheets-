#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool anyLucky = false;
    for (int i = a; i <= b; i++)
    {
        int num = i;
        bool lucky = true;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }
            num /= 10;
        }
        if (lucky)
        {
            anyLucky = true;
            cout << i << " ";
        }
    }
    if (anyLucky == false)
    {
        cout << -1;
    }
}