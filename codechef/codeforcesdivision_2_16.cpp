#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{
int n,p;
cin>>n>>p;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];}
long int sum=0;
p=p-1;
sum+=a[p]; 

for(int i=1;i<n;i++)
{if(p-i>=0 && p+i>n-1)
	{sum+=a[p-i];
		}
	else if(p-i<0 && p+i<=n-1)
	{	sum+=a[p+i];}
	else if(p-i>=0 && p+i<=n-1)
	{	if(a[p-i]!=0 && a[p+i]!=0)
		{	sum+=a[p-i]+a[p+i];}
	}
	else if(p-i<0 && p+i>n-1)
	{break;}
	}
cout<<sum;	

return 0;
}
