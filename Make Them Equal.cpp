#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;
        int index=n/2, flag=0;
        for (int i=0; i<n; i++)
            if (str[i] == c)
            {
                index = i+1;
                flag++;
            }
        if (flag == n) cout << 0;
        else if (n/index == 1) cout << 1 << '\n' << index;
        else cout << 2 << '\n' << n-1 << ' ' << n;
        cout << '\n';
    }
    return 0;
}