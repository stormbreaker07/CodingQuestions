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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count_unique = 1, count_same = 0, c = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                count_same = max(count_same, c);
                c=1;
                count_unique++;
            }
            else
            {
                c++;
            }
        }
        
        count_same = max(c, count_same);
        
        c = min(count_unique, count_same);
        if(c == 0)
        {
            if(n>1)
            {
                cout<<1<<endl;
            }
            else 
            {
                cout<<0<<endl;
            }
            
        }
        else
        {
            if(count_unique == count_same)
            {cout<<c-1<<endl;}
            else
            {
                cout<<c<<endl;
            }
            
        }
        
       
    }

    return 0;
}