#include<iostream>
using namespace std;
main()
{
int n,k,i,a[100005],x;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=a[i-1])x=i;
    }
    if(k<x)
    {cout<<"-1";}
    else
    {cout<<x-1;}
return 0;
}