#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        bool flag = false;
        long long int temp1, temp2, x1=0, x2=k, hcCopy, dcCopy;
        while (x2 != -1)
        {
            hcCopy = hc + x1*a;
            dcCopy = dc + x2*w;
            temp1 = hcCopy/dm;
            if (hcCopy%dm != 0) temp1++;
            temp2 = hm/dcCopy;
            if (hm%dcCopy != 0) temp2++;
            if (temp2 <= temp1)
            {
                flag = true;
                break;
            }
            x1++;
            x2--;
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}