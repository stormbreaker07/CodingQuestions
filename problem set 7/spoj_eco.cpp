#include<bits/stdc++.h>
using namespace std;

#define l long long int 
l mx=0;

bool is_possible(vector<l> v , l mid ,l n ,l m)
{
    l hei=0;
    for(l i=0;i<n;i++) {
        if(v[i]>mid)
        {
            hei += v[i] - mid;
        }

        if(hei>=m)
        {
            return true;
        }
    }

return false;
}


l solve(vector<l> v , l n ,l m)
{
    l s=0,e=mx;
    l mid , ans=0;
    while(s<=e)
    {
        
        mid = (s+e)/2;
        if(is_possible(v  , mid , n , m)) {
            ans = max(mid,ans);
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        
    }
return ans;    
}



int main()
{
    l n,m;
    cin>>n>>m;
    vector<l> v;
    l x;
    for(l i=0;i<n;i++)
    {
        cin>>x;
        mx = max(x , mx);
        v.push_back(x);
    }

    cout<<solve(v,n,m);



    return 0;
}