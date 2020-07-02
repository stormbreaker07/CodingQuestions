#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,k,x;
cin>>n>>k;
int a[k];
for(int i=0;i<n;i++)
{
    for(int j=0;j<k;j++)
    {
        cin>>x;
        if(x==0)
        {a[j]++;}
    }
}
int flag=0;
for(int i=0;i<k;i++)
{
    if(a[i]>0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    
}
if(flag==1)
{cout<<"YES";}
else
{
    cout<<"NO";
}

    return 0;
}