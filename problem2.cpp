#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        l n, q;
        cin >> n >> q;
        string st;
        cin >> st;

        l a[30] = {0};
        for (l j = 0; j < n; j++)
        {
            a[int(st[j]) - int('a')] += 1;
        }
        l x;

        for (l k = 1; k <= q; k++)
        {
            cin >> x;
            l cont = 0;
            sort(a, a + 30, greater<int>());
            for (int j = 0; j < 30; j++)
            {
                if(a[j]>x)
                {cont = cont+(a[j]-x);}
            }
        cout<<cont<<endl;
        }
        
    }

    return 0;
}