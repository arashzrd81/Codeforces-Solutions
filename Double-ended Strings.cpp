#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, smaller, larger;
        cin >> a;
        cin >> b;
        int len_a=a.size(), len_b=b.size();
        if (len_a < len_b)
        {
            smaller = a;
            larger = b;
        }
        else
        {
            smaller = b;
            larger = a;
        }
        int s, e, isFind;
        string temp;
        for (int i=smaller.size(); i>0; i--)
        {
            s = 0;
            e = i;
            for (int j=0; j<smaller.size()+1-i; j++)
            {
                for (int k=s; k<e; k++)
                    temp += smaller[k];
                isFind = larger.find(temp);
                if (isFind != -1) break;
                temp.clear();
                e++;
                s = e-i;
            }
            if (isFind != -1) break;
        }
        cout << (len_a-temp.size())+(len_b-temp.size()) << '\n';
    }
    return 0;
}