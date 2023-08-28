#include <iostream>
using namespace std;

int main()
{
    unsigned long long L1, L2, R1, R2;
    unsigned long long starting, ending;
    cin >> L1 >> R1 >> L2 >> R2;

    if (max(L1, L2) > min(R1, R2))
        cout << -1;
    else
        cout << max(L1, L2) << " " << min(R1, R2);
}