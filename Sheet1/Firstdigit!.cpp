#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string num_str = to_string(x);
    char first_num = num_str[0];
    if (first_num % 2 == 0)
        cout << "EVEN" << endl;
    else if (first_num % 2 != 0)
        cout << "ODD" << endl;
}