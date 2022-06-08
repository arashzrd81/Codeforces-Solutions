#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


long int gcd(long int a, long int b)
{
    if (a == 0) return b;
    return gcd(b%a, a);
}


long int findGCD(vector <long int> arr, int n)
{
    long int result = arr[0];
    for (int j=1; j<n; j++)
        result = gcd(arr[j], result);
    return result;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long int a[n];
        for (int j=0; j<n; j++)
            cin >> a[j];
        long int minNum = *min_element(a, a+n);
        vector <long int> diff;
        for (int j=0; j<n; j++)
            if (a[j] != minNum) diff.push_back(a[j]-minNum);
        n = diff.size();
        if (n == 0) cout << -1;
        else cout << findGCD(diff, n);
        cout << '\n';
    }
    return 0;
}