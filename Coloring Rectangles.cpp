#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long int a = n*m;
        if (a%3 != 1)
        {
            int ans = a/3;
            if (a%3 == 2) ans++;
            cout << ans << '\n';
        }
        else cout << a/3+1 << '\n';
    }
    return 0;
}