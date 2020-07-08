#include<bits/stdc++.h>
using namespace std;

#define md 1000000007
#define ll long long int
int main()
{
    ll t,k;
    cin>>t>>k;
    ll mx = 0;
    ll a[t][2];
    for(ll i=0;i<t;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][1]>mx)
        {
            mx = a[i][1];
        }
    }
    vector<ll> ans(1000020);
    ll n;
    for(ll i=1;i<=mx+1;i++)
    {   n = i/k;
        ans[i] += (n*i)+(n+1);
        ans[i] -= (n*(n+1)*k)/2;
        if(ans[i]<=0)
        {ans[i] = 1;}
        ans[i] = ans[i];
        ans[i] += ans[i-1];  
    //     cout<<i<<" "<<ans[i]<<endl; 
    // outfile << i << " " << ans[i] << endl;
    
    }
    ll value;
    for(ll i=0;i<t;i++)
    {
        // value = ans[a[i][1]]-ans[a[i][0]-1];
    // cout<<ans[a[i][1]]<<" "<<ans[a[i][0]-1]<< " ";
    cout<<(ans[a[i][1]]-ans[a[i][0]-1])%md<<endl;
    

    }

    return 0;
}