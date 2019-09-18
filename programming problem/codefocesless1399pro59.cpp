#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,k,i,a,sum=0;
	  
	  cin>>n>>k;
	  long int b[n];
	  for(i=0;i<n;i++)
	  {cin>>a;
		  if(k>0)
		  {if(a<0)
			  {a=a*-1;
				  k--;
			  }
		  }
		  b[i]=a;
		  sum=sum+a;
      }
      sort(b,b+n);
   if(k==0)
   {cout<<sum;}
   else if(k>0)
   {if(k%2==0)
	   {cout<<sum;}
	   else 
	 {cout<<sum-2*b[0];}
	 }
   return 0;
   }
		  
