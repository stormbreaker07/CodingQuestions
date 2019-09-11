#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int t,n;
	  cin>>t;
	  for(int i=0;i<t;i++)
	  {cin>>n;
		  long long int a[n+1]={0},d[n+1]={0},s[n];
		  long long int mx,mn;
		  for(int j=1;j<=n;j++)
		  {
			  cin>>a[j];
			  if(j-a[j]>1)
			  {mx=j-a[j];}
			  else
			  {mx=1;}
			  if(j+a[j]<n)
			  {mn=j+a[j]+1;}
			  else 
			  {mn=n+1;}
			  d[mx]+=1;
			  d[mn]-=1;
			  }
			  for(int j=0;j<n;j++)
			  {cin>>s[j];}
	
			  
		for(int j=1;j<=n;j++)
		{d[j]=d[j]+d[j-1];}
		sort(d,d+n+1);	
		sort(s,s+n);	
		int c=0;
		for(int j=0;j<n;j++)
		{if(d[j+1]!=s[j])
			{c++;}
		}
		if(c==0)
		{cout<<"YES"<<endl;}
		else
		{cout<<"NO"<<endl;}
	}
	return 0;
}	  
		  
