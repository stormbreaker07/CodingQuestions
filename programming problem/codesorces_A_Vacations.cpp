#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    int dp[n][3];
    for(int i=0;i<n;i++)
    {cin>>a[i];
    dp[i][0] = 0;
    dp[i][1] = 0;
    dp[i][2] = 0;}

    //create a dp array
    // 0 for rest
    // 1 for contest
    // 2 for gym

    if(a[0]==1 || a[0]==3)
    {dp[0][1]++;}
    if(a[0]==2 || a[0]==3)
    {dp[0][2]++;}
    for(int i=1;i<n;i++)
    {
            dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
         
            dp[i][1] = max(dp[i-1][0],dp[i-1][2]);
       
        if(a[i]==1 || a[i]==3)
        {dp[i][1]++;}
       
            dp[i][2] = max(dp[i-1][0],dp[i-1][1]);
       
        if(a[i]==2 || a[i]==3)
        {dp[i][2]++;}
    }

    cout<<n-max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));

    return 0;
}