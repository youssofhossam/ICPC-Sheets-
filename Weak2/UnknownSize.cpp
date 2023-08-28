#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    vector<int> nums;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            nums.push_back(i);
            counter++;
        }
    }
    cout << counter << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << nums[i] << " ";
    }
}