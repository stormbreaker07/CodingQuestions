#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int t,n,k;
	  long long int sum,sumson;
	  cin>>t;
	  for(int i=0;i<t;i++)
	  {sum=0,sumson=0;
		  cin>>n>>k;
		  int a[n];
		  for(int j=0;j<n;j++)
		  {cin>>a[j];
		   sum+=a[j];}
		  sort(a,a+n);
		  int mn=min(k,n-k);
		  for(int j=0;j<mn;j++)
		  {sumson+=a[j];}
		  sum=abs(sum-2*sumson);
		  cout<<sum<<endl;
	  }
	  return 0;
  }
