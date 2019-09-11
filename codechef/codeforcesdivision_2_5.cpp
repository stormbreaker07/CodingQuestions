#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int l;
	  double max=0,max2,max1;
	  int n; 
	  cin>>n>>l;
	  long long int a[n];
	  for(int i=0;i<n;i++)
	  {cin>>a[i];}
	  sort(a,a+n);
	  max1=a[0]-0;
	  max2=l-a[n-1];
	  for(int i=0;i<n;i++)
	  {
		  if(max<a[i]-a[i-1])
			{max=a[i]-a[i-1];}
	  }
	  max=max/2.00;
	  if (max<max1)
	  {max=max1;}
		if (max<max2)
	  {max=max2;}
	   cout << fixed << setprecision(10) <<max;
	  return 0;
  }
	  
