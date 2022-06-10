#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, twoCounts=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i=0; i<n; i++)
            if (s[i] == '2') twoCounts++;
        if ( (twoCounts == 1) || (twoCounts == 2) ) cout << "NO\n";
        else
        {
            char ans[n][n];
            for (int i=0; i<n; i++)
                for (int j=0; j<n; j++)
                    (i == j) ? ans[i][j] = 'X' : ans[i][j] = '#';
            bool marks[n];
            for (int i=0; i<n; i++)
                (s[i] == '1') ? marks[i] = true : marks[i] = false;
            bool flag;
            for (int i=0; i<n; i++)
            {
                flag = false;
                for (int j=i+1; j<n; j++)
                {
                    if ( (s[i] == '1') || (s[j] == '1') )
                    {
                        ans[i][j] = '=';
                        ans[j][i] = '=';
                    }
                    else
                    {
                        if (!flag)
                        {
                            ans[i][j] = '+';
                            ans[j][i] = '-';
                            flag = true;
                        }
                        else
                        {
                            ans[i][j] = '-';
                            ans[j][i] = '+';
                        }
                    }
                }
            }
            cout << "YES\n";
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                    cout << ans[i][j];
                cout << '\n';
            }
        }
    }
    return 0;
}