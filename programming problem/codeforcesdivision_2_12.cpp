#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,c=0;
	  cin>>n;
	  int a[n],b[n];
	  for(int i=0;i<n;i++)
	  {cin>>a[i];}
	  for(int i=0;i<n;i++)
	  {
		  for(int j=1;j<n;j++)
		  {if(i-j>=0)
			  {if(a[i]>=a[i-j] && a[i-j]<=a[i-j+1])
			  {	c++;}
		       else
		       {break;}
		       }
		   }
		      for(int j=1;j<n;j++)
		  {if(i+j<n)
		       {if(a[i]>=a[i+j] && a[i+j]<=a[i+j-1])
				   {c++;}
				else
				{break;}	   
			   } 
		   }
		   b[i]=c+1;
		   c=0;
	   }
		 sort(b,b+n,greater<int>());
		 cout<<b[0];
		 
return 0;
}
