#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    vector<int> X = {a, b, c};
    sort(X.begin(), X.end());

    for (int num : X)
    {
        cout << num << endl;
    }
    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}