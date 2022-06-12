#include <iostream>

using namespace std;


int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        long long int n, x, t;
        cin >> n >> x >> t;
        long long int temp = t/x;
        long long int diff = n-1-temp;
        unsigned long long int answer;
        (0 <= diff) ? answer = (diff*temp) + (temp*(temp+1)/2) : answer = n*(n-1)/2;
        cout << answer << '\n';
    }
    return 0;
}