#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, budget;
    cin >> n >> budget;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    vector<int> all_costs;
    int even = 0, odd = 0, cuts = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (numbers[i] % 2 == 0)
            even++;
        else
            odd++;
        if (even == odd)
        {
            int cost = abs(numbers[i] - numbers[i + 1]);
            all_costs.push_back(cost);
        }
    }
    sort(all_costs.begin(), all_costs.end());

    for (int j = 0; j < all_costs.size(); j++)
    {
        if (budget - all_costs[j] >= 0)
        {
            budget -= all_costs[j];
            cuts++;
        }
    }
    cout << cuts;
}