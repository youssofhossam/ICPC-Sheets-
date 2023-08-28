#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> avangers_powers(n);
    for (int i = 0; i <= n; i++)
        cin >> avangers_powers[i];

    sort(avangers_powers.rbegin(), avangers_powers.rend());

    int min_avangers = 0, power = 0;

    for (int j = 0; j < n; j++)
    {
        power += avangers_powers[j];
        min_avangers++;

        if (power > m)
        {
            cout << min_avangers;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}
