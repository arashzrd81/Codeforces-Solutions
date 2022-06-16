#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        long int gcd = 1;
        for (int i=0; i<c-1; i++)
            gcd *= 10;
        long int x = gcd;
        for (int i=0; i<a-c; i++)
            x *= 10;
        long int y = x;
        if (a < b)
            for (int i=0; i<b-a; i++)
                y *= 10;
        else if (a > b)
            for (int i=0; i<a-b; i++)
                y /= 10;
        y += gcd;
        cout << x << ' ' << y << '\n';
    }
    return 0;
}