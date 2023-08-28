#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n, m, sum = 0;
        cin >> n >> m;

        if (n <= 0 || m <= 0)
            return 0;
        else
        {
            if (m > n)
                swap(m, n);
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum"
                 << " =" << sum;
        }

        cout << endl;
    }
}
