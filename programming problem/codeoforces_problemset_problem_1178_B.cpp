#include<bits/stdc++.h>
using namespace std;

#define vec string
#define l long int 

long long int sum = 0;

int main()
{
    vec a;
    cin>>a;
    a = a+'z';
    l n = a.length()-1;
    int dp[n] = {0};
    l count = 0;
    vector<l> v;
    for(l i=0;i<n;i++)
    {
        if(a[i]=='v')
        {
            if(a[i+1]=='v')
            {
                count++;
            }
            else
            {
                dp[i] = count;
                count = 0;
            }
        }
        if(a[i]=='o')
        {v.push_back(i);}
    }
    for(int i=0;i<n;i++)
    {dp[i] = dp[i]+dp[i-1];}
//    for(int i=0;i<n;i++)
//     {cout<<dp[i]<<" ";}

    l pre =0;
    l pot=dp[n-1];
    for(l i =0;i<v.size();i++)
    {
        pre = dp[v[i]];
        sum += pre*(pot-pre);
    }
cout<<sum;

    return 0;
}