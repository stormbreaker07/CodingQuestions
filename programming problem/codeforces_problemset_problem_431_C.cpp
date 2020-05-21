/*
#include <bits/stdc++.h>
using namespace std;

long int n, k, d;
long long int num = 0;

int fun(int a, int b, int con)
{
    b = b + a;
    if (a >= d)
    {
        con = 1;
    }
    if (b == n)
    {
        if (con == 1)
        {
            num++;
        }

        return 1;
    }

    if (b > n)
    {
        return 1;
    }

    for (int i = 1; i <= k; i++)
    {
        int back = fun(i, b, con);
        if(back==1)
        {break;}
    }
    return 0;
}

int main()
{
    cin >> n >> k >> d;
    long long int md = 1000000007;
    int m = fun(0, 0, 0);
    cout<<num%md;

   return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n,k,d;
    cin>>n>>k>>d;
    long int dp[n+1][2];
    long int md = 1000000007;
    dp[0][0] = 1;
    dp[0][1] = 0;
    for(int i=1;i<=n;i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;

        for(int j=1;j<=k;j++)
        {
            if(i-j<0)
            {break;}
            if(j<d)
            {
                dp[i][0] += dp[i-j][0];
                dp[i][0] = dp[i][0]%md;

                dp[i][1] += dp[i-j][1];
                // dp[i][1] = dp[i][1]%md;

            }
            else
            {
                dp[i][1] += dp[i-j][0];
                dp[i][1] += dp[i-j][1];
                dp[i][1] = dp[i][1]%md;
            }
        }

    }

    cout<<dp[n][1];

    return 0;
}