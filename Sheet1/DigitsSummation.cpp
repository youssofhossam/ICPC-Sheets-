#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    unsigned long long m;
    cin >> n >> m;
    unsigned long long last1 = n % 10;
    unsigned long long last2 = m % 10;

    unsigned long long sum = last1 + last2;

    cout << sum << endl;
}
