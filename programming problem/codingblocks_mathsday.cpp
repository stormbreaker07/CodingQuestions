#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        l a,n,k,ans = 1,sum = 1;
        cin>>a>>n>>k;
        for(l i = 1;i<=n;i++)
        {
            ans = ((ans%k)*(a%k))%k;
            sum = ((sum%k)*(ans%k))%k;
        }
        cout<<sum<<endl;

    }




    return 0;
}