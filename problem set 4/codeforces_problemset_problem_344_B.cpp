#include<bits/stdc++.h>
using namespace std;

#define l long int 

int main()
{
l a[3];
cin>>a[0]>>a[1]>>a[2];
l x,y,z;
x = a[0];
y = a[1];
z = a[2];
sort(a,a+3);

l mx = a[0] + a[1];

if(mx==a[2])
{
    if(x == a[2])
    {cout<<y<<" 0 "<<z;}
    else if(y == a[2])
    {
        cout<<x<<" "<<z<<" 0";
    }
    else if(z == a[2])
    {
        cout<<"0 "<<y<<" "<<x;
    }
}
else if(mx<a[2])
{
    cout<<"Impossible";
}
else if(mx>a[2])
{l w=0;
    if((mx-a[2])%2==0)
    {
        w = (mx-a[2])/2;
        if(x == a[2])
        {
            cout<<y-w<<" "<<w<<" "<<z-w;
        }
        else if(y == a[2])
        {
            cout<<x-w<<" "<<z-w<<" "<<w;
        }
        else if(z == a[2])
        {
            cout<<w<<" "<<y-w<<" "<<x-w;
        }
    }
    else 
    {
        cout<<"Impossible";
    }
}

    return 0;
}