#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if (n == static_cast<int>(n))
    {
        cout << "int"
             << " " << n << endl;
    }
    else if (n == static_cast<double>(n))
    {
        cout << "float"
             << " " << static_cast<int>(n) << " " << n - static_cast<int>(n) << endl;
    }
}
