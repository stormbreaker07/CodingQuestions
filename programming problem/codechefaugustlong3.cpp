#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{long int n;
		cin>>n;
		long long int a[n],zom[n],fir,las;
		long long int b[n]={0};
		for(long int j=0;j<n;j++)
		{cin>>a[j];
			fir=j-a[j];
			las=j+a[j];
			if(fir<0)
			{fir=0;}
			if(las>n-1)
			{las=n-1;}
			for(long int k=fir;k<=las;k++)
			{b[k]=b[k]+1;}
		} 
		
		sort(b,b+n);
		for(long int j=0;j<n;j++)
		{cin>>zom[j];}
		sort(zom,zom+n);
	   int c=0;
	   for(long int j=0;j<n;j++)
	   {if(b[j]!=zom[j])
		   {c=3;}
	   }
	   if(c==3)
	   {cout<<"NO"<<endl;}
	   else
	   {cout<<"YES"<<endl;}
	
	}
	return 0;
}
