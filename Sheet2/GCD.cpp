#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    vector<int> div1, div2, common;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            div1.push_back(i);
    }
    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0)
            div2.push_back(j);
    }
    sort(div1.begin(), div1.end());
    sort(div2.begin(), div2.end());
    set_intersection(div1.begin(), div1.end(), div2.begin(), div2.end(), back_inserter(common));
    int max_common = *max_element(common.begin(), common.end());
    cout << max_common;
}