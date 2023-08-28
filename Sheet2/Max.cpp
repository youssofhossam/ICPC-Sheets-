#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 1; i <= n; i++)
    {
        long long number;
        cin >> number;
        array.push_back(number);
    }
    auto maxElement = max_element(array.begin(), array.end());

    int maxx = *maxElement;

    cout << maxx;
}