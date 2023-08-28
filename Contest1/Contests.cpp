#include <iostream>
using namespace std;

int main()
{
    long long problems, tests;
    cin >> problems >> tests;
    long long answer = 0;

    if (problems < tests)
        answer = tests - problems;
    else
    {
        if (problems % tests == 0)
            answer = 0;
        else
        {
            answer = tests - (problems % tests);
        }
    }
    cout << answer;
}