#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{long int n,j,k,mx=0;
	cin>>n;
long int a[n],b[1000000] = {0};
for(j=0;j<n;j++)
{cin>>a[j];
for(k=1;k<=sqrt(a[j]);k++)
{if(a[j]%k==0)
 {
	if(a[j]/k==k)
	{
	b[k]++;}
	else
	{
	b[k]++;
	b[a[j]/k]++;	
	}
 }}
if(b[a[j]]>mx)
{mx=b[a[j]];}
}
cout<<mx-1<<endl;
}
return 0;
}	
