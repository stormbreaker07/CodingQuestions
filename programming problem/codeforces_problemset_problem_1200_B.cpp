#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define l long int

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        l n, m, k, x = 0;
        cin >> n >> m >> k;
        l a[n];
        for (l j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (n > 1)
        {
            for (l j = 0; j < n - 1; j++)
            {
                // first condition a[i]<a[i+1]
                if (a[j] < a[j + 1])
                {
                    x = abs(a[j + 1] - a[j]);
                    if (x <= k)
                    {
                        x = k - x;
                        if(a[j]>=x)
                        {m = m + x;}
                        else
                        {
                            m = m+a[j];
                        }
                        
                    }
                    else
                    {
                        x = x - k;
                        if (m >= x)
                        {
                            m = m - x;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                else if (a[j] > a[j + 1])
                {

                    x = abs(a[j] - a[j + 1]);
                    m = m + x;
                    if(a[j+1]>=k)
                    {m = m+k;}
                    else
                    {
                        m = m+a[j+1];
                    }
                    
                }
                else if(a[j]==a[j+1])
                {
                    if(a[j]>=k)
                    {m = m+k;}
                    else
                    {
                        m = m+a[j];                    }
                    
                }
            }
        }
        else
        {
            flag = 0;
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}