#include<bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l n;
    cin>>n;
    l a[n];
    for(l i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l mx = 1,ans=0;
    for(l i=0;i<n-1;i++)
    {
        if(a[i]*2>=a[i+1])
        {mx++;}
        else
        {
            if(mx>ans)
            {ans = mx;}
            mx=1;
        }
    }
    if(mx>ans)
    {ans = mx;}

    cout<<ans;



    return 0;
}