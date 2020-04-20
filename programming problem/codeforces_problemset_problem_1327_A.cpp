#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long int x,y;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x%2==0)
        {
            if(y%2==0)
            {cout<<"YES"<<endl;}
            else
            {cout<<"NO"<<endl;}
        }
        else if(x%2!=0)
        {
            if(y%2==0)
            {cout<<"NO"<<endl;}
            else
            {cout<<"YES"<<endl;}
        }
    }
    
    return 0;
}