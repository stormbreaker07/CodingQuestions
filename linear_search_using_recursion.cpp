#include<bits/stdc++.h>
using namespace std;

int linear(int a[],int i,int n,int k)
{
    if(i==n)
    {return -1;}

    if(a[i]==k)
    {return i;}

    return linear(a,i+1,n,k);

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}

    int key;
    cin>>key;
    cout<<linear(a,0,n,key);

    return 0;
}