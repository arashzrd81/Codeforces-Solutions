#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        map <int,int> hmap;
        int minDistance = INT_MAX;
        int previousIndex=0, currentIndex=0;
        for (int i=0; i<n; i++)
        {
            if (hmap.find(a[i]) != hmap.end())
            {
                currentIndex = i;
                previousIndex = hmap[a[i]];
                minDistance = min((currentIndex-previousIndex),minDistance);
            }
            hmap[a[i]] = i;
        }
        (minDistance == INT_MAX) ? cout << -1 : cout << n-minDistance;
        cout << '\n';
    }
    return 0;
}