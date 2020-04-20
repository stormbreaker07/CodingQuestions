#include <bits/stdc++.h>
using namespace std;

#define l long int
#define ll long long int

int main()
{
    l t, n;
    cin >> t;

    for (l i = 0; i < t; i++)
    {
        cin >> n;
        ll a[n];
        ll yasser = 0;
        ll dp[n];
        for (l j = 0; j < n; j++)
        {
            cin >> a[j];
            if (j > 0)
            {
                dp[j] = dp[j - 1] + a[j];
            }
            else
            {
                dp[j] = a[j];
            }
        }

        // max sum array
        l c = 0, flag = 0;
        ll adel = 0;
        yasser = dp[n - 1];
        ll pre_sum=0,pot_sum=0;
        for (l j = 0; j < n; j++)
        {
            pre_sum += a[j];
            if (pre_sum <= 0)
            {
                c = j;
                flag = 1;
                break;
            }

            pot_sum += a[(n - 1) - j];
            if (pot_sum <= 0)
            {
                c = (n - 1) - j;
                flag = 2;
                break;
            }
        }

        if (flag == 1)
        {
            adel = dp[n - 1] - dp[c];
        }
        if (flag == 2)
        {
            adel = dp[c-1];
        }
cout<<yasser<<" "<<adel<<endl;
        // for (l j = 1; j < n; j++)
        // {
        //    if(max_curr+a[j]>=a[j] && flag==0)
        //    {c=j;
        //    }
        //    else
        //    {c=-1;
        //     flag=1;
        //    }

        //     max_curr = max(a[j], max_curr + a[j]);

        //     max_now = max(max_now, max_curr);
        // }
        if (yasser > adel)
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


