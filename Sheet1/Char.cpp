#include<iostream>
using namespace std ;

int main()
{
    char x ;
    cin >> x ;
    int decimal_value1 = x ;

    if (decimal_value1 >= 97 && decimal_value1 <= 122){
        decimal_value1 -= 32 ;
        char x = decimal_value1 ;
        cout << x ;
    }

    else if (decimal_value1 >= 65 && decimal_value1 <= 90){
        decimal_value1 += 32 ;
        char x = decimal_value1 ;
        cout << x ;
    }

}
