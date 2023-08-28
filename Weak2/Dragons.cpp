#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long kirito_power, num_dragons;
    cin >> kirito_power >> num_dragons;
    bool flag = true;
    vector<pair<int, int>> powers;

    for (int i = 0; i < num_dragons; i++)
    {
        int x, y;
        cin >> x >> y;
        powers.push_back(make_pair(x, y));
    }
    sort(powers.begin(), powers.end());

    for (int j = 0; j < num_dragons; j++)
    {
        if (kirito_power > powers[j].first)
        {
            kirito_power += powers[j].second;
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout << "NO";
    else
        cout << "YES";
}