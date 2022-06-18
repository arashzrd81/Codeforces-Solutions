#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        for (int j=0; j<n; j++)
            cin >> a[j];
        if (n == 1)
        {
            cout << a[0] << '\n';
            continue;
        }
        sort(a, a+n, greater<long long int>());
        long long int result=a[n-1];
        for (int j=0; j<n-1; j++)
            if (result < a[j]-a[j+1]) result = a[j]-a[j+1];
        cout << result << '\n';
    }
    return 0;
}