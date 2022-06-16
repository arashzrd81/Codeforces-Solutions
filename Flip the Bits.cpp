#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int j, num0, num1;
        string ans = "YES\n";
        for (int i=0; i<n; i++)
        {
            j = i;
            num0 = 0;
            num1 = 0;
            if (a[i] == b[i])
                while ( (a[j] == b[j]) && (j < n) )
                {
                    (a[j] == '0') ? num0 += 1 : num1 += 1;
                    j++;
                }
            else
                while ( (a[j] != b[j]) && (j < n) )
                {
                    (a[j] == '0') ? num0 += 1 : num1 += 1;
                    j++;
                }
            if ( (a[i] == b[i]) && (j == n) )
            {
                ans = "YES\n";
                break;
            }
            if (num0 != num1)
            {
                ans = "NO\n";
                break;
            }
            i = j-1;
        }
        cout << ans;
    }
    return 0;
}