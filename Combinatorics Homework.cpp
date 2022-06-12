#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, c, m;
        cin >> a >> b >> c >> m;
        long int minPair;
        if (max(max(a,b), c) == a) minPair = a-b-c;
        else if (max(max(a,b), c) == b) minPair = b-a-c;
        else minPair = c-a-b;
        if (minPair < 0) minPair = 0;
        else if (0 < minPair) minPair--;
        long int maxPair = a-1+b-1+c-1;
        ( (minPair <= m) && (m <= maxPair) ) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}