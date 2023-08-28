#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    int decimalValue = static_cast<int>(x);
    if (decimalValue >= 48 && decimalValue <= 57)
        cout << "IS DIGIT" << endl;
    else if (decimalValue >= 65 && decimalValue <= 90)
        cout << "ALPHA\n"
             << "IS CAPITAL" << endl;
    else if (decimalValue >= 97 && decimalValue <= 122)
        cout << "ALPHA\n"
             << "IS SMALL" << endl;
}
