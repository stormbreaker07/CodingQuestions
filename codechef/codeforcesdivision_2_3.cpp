#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,m,k,num;
	  cin>>n>>m>>k;
	  int a[m+1][n]={0};
	  for(int i=0;i<=m;i++)
	  {cin>>num;
		for(int j=0;j<n;j++)
		{if(num>0)
			{a[i][j]=num%2;
			num=num/2;}
			else 
			{a[i][j]=0;} 
		  }
	  }
      int c=0;
	  int ans[m]={0};
	  for(int i=0;i<m;i++)
	  {
		  for(int j=0;j<n;j++)
		  {
			  if(a[i][j]!=a[m][j])
			  {ans[i]++;
			  }
		  }
			  if(ans[i]<=k)
			  {c++;}
	  
  }
	  
	  cout<<c;
	 
	  return 0;
  }
	  
	  
