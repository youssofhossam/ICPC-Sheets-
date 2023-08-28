#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long m, totalSum = 0;
    cin >> n >> m;
    vector<int> grades(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
        totalSum += grades[i];
    }

    if (totalSum >= m)
        cout << m;
    else
        cout << totalSum;
}