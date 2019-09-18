#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{long long int n,k;
		cin>>n>>k;
	if(k==1)
	{cout<<"NO"<<endl;}
	else if(n==k)
	{cout<<"YES"<<endl;}
	else if(k==n/k)
	{cout<<"NO"<<endl;}
	else if(k>n/k)
	{cout<<"YES"<<endl;}
	else if(k<n/k)
	{if(n%(k*k)==0)
		{cout<<"NO"<<endl;}
		else if(n%(k*k)!=0)
		{cout<<"YES"<<endl;}
	}
	}
	return 0;
}
