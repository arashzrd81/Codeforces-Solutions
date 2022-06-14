#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, answer=0;
        cin >> n;
        long int a[n];
        bool marks[n], temp;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            marks[i] = false;
        }
        sort(a, a+n);
        for (int i=0; i<n; i++)
        {
            temp = false;
            while (a[i] != 0)
            {
                for (int j=1; j<=n; j++)
                    if ( (a[i] == j) && (!marks[j-1]) )
                    {
                        answer++;
                        marks[j-1] = true;
                        temp = true;
                        break;
                    }
                if (temp) break;
                else a[i] /= 2;
            }
        }
        (answer == n) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}