#include<bits/stdc++.h>
using namespace std;

#define l long int 

int main()
{
     l n;
     cin>>n;
     string a,b;
     cin>>a>>b;
     int dp[n+1][2];
     dp[n][0] = -1;
     dp[n][1] = -1;
     for(l i=0;i<n;i++)
     {
         if(a[i]==b[i])
         {dp[i][0]=0;
         dp[i][1] = 0;}
         else
         {
             dp[i][0]=1;
             dp[i][1] = a[i]-'0';
         }
     }
    l ans =0;
     for(l i=0;i<n;i++)
     {
         if(dp[i][0]==1)
         {
             if(dp[i+1][0]==1)
             {
                 if(dp[i][1] != dp[i+1][1])
                 {
                     ans++;
                     i=i+1;
                 }
                 else
                 {
                     ans++;
                 }
             }
             else
             {
                 ans+=1; 
             }
         }
     }
     cout<<ans<<endl;

    return 0;
}