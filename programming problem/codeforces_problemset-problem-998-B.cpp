#include <bits/stdc++.h>
using namespace std;

#define pb push_back
int main()
{
    int n, bt;
    cin >> n >> bt;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
    int dp[n][2];
    if (a[0] % 2 != 0)
    {
        dp[0][0] = 1;
        dp[0][1] = 0;
    }
    else
    {
        dp[0][1] = 1;
        dp[0][0] = 0;
    }
    // dp[i][0] for odd
    // dp[i][1] for even
    vector<int> coin;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = 0, dp[i][1] = 0;

        dp[i][0] += dp[i - 1][0];
        if (a[i] % 2 != 0)
        {
            dp[i][0]++;
        }
        dp[i][1] += dp[i - 1][1];
        if (a[i] % 2 == 0)
        {
            dp[i][1]++;
        }

        if (dp[i][0] - dp[i][1] == 0)
        {
            if (i < n - 1)
            {
                coin.pb(abs(a[i] - a[i + 1]));
            }
        }
    }

    sort(coin.begin(),coin.end());
    int mx = 0,con=0;
    if (coin.size() >= 1)
    {
        for (int j = 0; j < coin.size(); j++)
        {
          mx += coin[j];
          if(mx<=bt)
          {con++;
          }
          else
          {
              break;
          }
        }
    }
    else
    {
        con = 0;
    }

    /*output*/

    if (con > 0)
    {
        cout << con;
    }
    else
    {
        cout << 0;
    }

    return 0;
}