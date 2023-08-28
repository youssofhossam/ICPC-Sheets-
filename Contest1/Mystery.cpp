#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int numDoors;
    long long numKeys;
    cin >> numDoors >> numKeys;
    vector<long long> lefts;
    vector<long long> rights;
    for (int i = 0; i < numDoors; i++)
    {
        long long l, r;
        cin >> l >> r;
        lefts.push_back(l);
        rights.push_back(r);
    }
    auto max = max_element(lefts.begin(), lefts.end());
    auto min = min_element(rights.begin(), rights.end());

    int counter = 0;

    for (int i = *max; i <= *min; i++)
        counter++;
    cout << counter;
}
