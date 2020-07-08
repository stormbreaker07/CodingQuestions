#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
	long int y,k,n,x,c=0;
	cin>>y>>k>>n;
	if(y>=n)
	{cout<<"-1";}
	else if(k>n)
	{cout<<"-1";}
	else
	for(long int i=1;i<=n;i++)
	{
		if(i*k>y && i*k<=n)
		{c++;
			x=i*k-y;
			cout<<x<<" ";
		}
		else if(i*k>n)
		{if(c==0)
			{cout<<"-1";}
			break;}
	}
	
	return 0;
}
