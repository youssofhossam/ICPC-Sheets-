#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min_value = min({a, b, c});
    int max_value = max({a, b, c});
    cout << min_value << " " << max_value << endl;
}