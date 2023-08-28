#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, m;
    double a, b, calc;
    double min = 10000;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        calc = (m * a) / b;
        // cout << calc << endl;
        if (calc < min)
            min = calc;
    }
    if (min == static_cast<int>(min))
        cout << static_cast<int>(min);
    else
        cout << fixed << setprecision(9) << min;
}