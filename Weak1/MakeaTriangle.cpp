#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int a, int b, int c)
{

    vector<int> A = {a, b, c};
    sort(A.begin(), A.end());
    return max(A[2] - A[1] - A[0] + 1, 0);
}
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
}