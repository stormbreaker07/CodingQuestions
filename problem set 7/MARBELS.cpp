#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    long long int n,k,ans=1;
    cin>>n>>k;
    if(n<k)
    {
        cout<<0<<endl;
    }
    else if(k==n)
    {
        cout<<1<<endl;
    }
    else
    {
        n--;
        k--;
        if(k>n/2)
        {k = n-k;}
    for(long long int i=1;i<=k;i++)
    {
        
        ans = (ans*n)/i;
    n--;
    }

    cout<<ans<<endl;
    }
    }

    return 0;
}