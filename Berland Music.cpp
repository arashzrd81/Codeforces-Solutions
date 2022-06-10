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
        int p[n];
        for (int i=0; i<n; i++)
            cin >> p[i];
        string s;
        cin >> s;
        int numOfZeros = count(s.begin(), s.end(), '0');
        set <int> st1;
        set <int> st2;
        for (int i=0; i<n; i++)
            (s[i] == '0') ? st1.insert({p[i]}) : st2.insert({p[i]});
        map <int, int> mp1;
        map <int, int> mp2;
        int index1=1, index2=numOfZeros+1;
        for (set <int> :: iterator it = st1.begin(); it != st1.end(); it++)
        {
            mp1.insert({*it, index1});
            index1++;
        }
        for (set <int> :: iterator it = st2.begin(); it != st2.end(); it++)
        {
            mp2.insert({*it, index2});
            index2++;
        }
        for (int i=0; i<n; i++)
        {
            (s[i] == '0') ? cout << mp1.find(p[i])->second : cout << mp2.find(p[i])->second;
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}