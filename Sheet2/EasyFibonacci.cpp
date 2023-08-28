#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = 0, second = first + 1;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        int next = first + second;
        first = second;
        next = second;
    }
}