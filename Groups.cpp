#include <iostream>

using namespace std;


string solution()
{
    int n;
    cin >> n;
    int a[n][5], b[5]={0, 0, 0, 0, 0};
    for (int i=0; i<n; i++)
        for (int j=0; j<5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                if (j == 0) b[0]++;
                else if (j == 1) b[1]++;
                else if (j == 2) b[2]++;
                else if (j == 3) b[3]++;
                else b[4]++;
            }
        }
    int x=0, y=1, flag;
    while (x != 4)
    {
        flag = 0;
        for (int i=0; i<n; i++)
        {
            if ( (a[i][x] == 1) || (a[i][y] == 1) ) flag++;
            else break;
        }
        if ( (flag == n) && (n/2 <= b[x]) && (n/2 <= b[y]) ) return "YES\n";
        y++;
        if (y == 5)
        {
            x++;
            y = x+1;
        }
    }
    return "NO\n";
}


int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solution();
    return 0;
}