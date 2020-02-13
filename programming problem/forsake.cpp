#include<bits/stdc++.h>
using namespace std;


int main()
{
int t,n,k;
cin>>t;
for(int m=0;m<t;m++)
{
cin>>n>>k;
long int a[n];
int count =0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2!=0)
{count++;}
    
}	
if(count%2!=0)
{cout<<1<<endl;}
else
{cout<<0<<endl;}
}
	return 0;
}

