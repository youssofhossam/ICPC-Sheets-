#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        nums.push_back(number);
    }
    sort(nums.begin(), nums.end());

    // for(int x = 0; x < nums.size(); x++){
    //     if(nums[x] > nums[x + 1]);
    //         swap(nums[x], nums[x + 1]);
    // }

    for (int j : nums)
    {
        cout << j << " ";
    }
}
