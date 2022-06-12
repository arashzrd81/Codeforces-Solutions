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
        int a[n];
        multiset <int> aCopy;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            aCopy.insert(a[i]);
        }
        long long int j=1, total=0;
        multimap <int, int> temp;
        for (multiset <int> :: reverse_iterator it = aCopy.rbegin(); it != aCopy.rend(); it++)
        {
            temp.insert({*it, j});
            total += 2*(*it)*abs(j);
            (0 < j) ? j *= -1 : j = j*(-1)+1;
        }
        cout << total << "\n0";
        for (int i=0; i<n; i++)
        {
            auto itr = temp.find(a[i]);
            cout << ' ' << itr->second;
            temp.erase(itr);
        }
        cout << '\n';
    }
    return 0;
}