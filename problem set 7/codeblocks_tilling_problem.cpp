#include<bits/stdc++.h>
using namespace std;

long long int ans=0;

long int fun(int n , int m , long long int mod)
{
    //base case
    if(n<m)
    {
        return 1;
    }
    else if(n==m)
    {
        return 2;
    }
    long long int  x = (fun(n-1,m, mod) + fun(n-m,m,mod))%mod;
    
    return x;
}

int main()
{
    int t,x,y;
    cin>>t;
    long int md = 1e9 + 7, ans; 
    while(t--) {
        cin>>x>>y;

        cout<<fun(x,y,md);
    }


    return 0;
}