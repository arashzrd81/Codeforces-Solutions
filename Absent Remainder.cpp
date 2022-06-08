#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, minNum, index=0;
        cin >> n;
        int a[n];
        cin >> a[0];
        minNum = a[0];
        for (int i=1; i<n; i++)
        {
            cin >> a[i];
            if (a[i] < minNum)
            {
                minNum = a[i];
                index = i;
            }
        }
        swap(a[0], a[index]);
        for (int i=1; i<=n/2; i++)
            cout << a[i] << ' ' << minNum << '\n';
    }
    return 0;
}