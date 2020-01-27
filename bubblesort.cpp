#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++)
	  {cin>>a[i];}
	  for(int i=0;i<=Sn-1;i++)
	  {
		  for(int j=0;j<=n-1-i;j++)
		  {if(a[j+1]<a[j])
			  {swap(a[i],a[j]);
			  }
		  }
	  }
	  for(int i=0;i<n;i++)
	  {cout<<a[i]<<' ';}
	  return 0;
  }
