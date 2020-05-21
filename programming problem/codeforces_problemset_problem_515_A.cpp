#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{
    l x,y,z,ans=0;
    cin>>x>>y>>z;
    x = abs(x);
    y = abs(y); 
    if(x>y)
    {
        ans = 2*y;
        ans += x-y;
    }
    else
    {
        ans = 2*x;
        ans += y-x;
    }
    if(z<ans)
    {cout<<"NO";}
    else
    {
        if((z-ans)%2==0)
        {cout<<"YES";}
        else
        {cout<<"NO";}
    }
    


    return 0;
}