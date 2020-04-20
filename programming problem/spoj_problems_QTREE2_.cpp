#include<bits/stdc++.h>
using namespace std;

#define l long int 

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        l n,a,b,c;
        cin>>n;
        vector< pair<l,l> > v[n+1];
        for(int j=1;j<n;j++)
        {
            cin>>a>>b>>c;
            v[a].push_back({b,c});
        }
    }

    return 0;
}