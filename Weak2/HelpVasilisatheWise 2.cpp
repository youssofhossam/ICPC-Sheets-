#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x, y, z, w;
    for (int i = 1; i < 10; i++)
    {
        x = i;
        for (int j = 1; j < 10; j++)
        {
            y = j;
            for (int k = 1; k < 10; k++)
            {
                z = k;
                for (int l = 1; l < 10; l++)
                {
                    w = l;
                    if (x != y && x != z && x != w && y != z && y != w && z != w)
                    {
                        if (x + y == r1 && z + w == r2 && x + z == c1 && y + w == c2 && x + w == d1 && y + z == d2)
                        {
                            cout << x << " " << y << endl;
                            cout << z << " " << w << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << -1;
    return 0;
}