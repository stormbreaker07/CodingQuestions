#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
long long int wd,hg;  
  int main()
  {long int n,m,i;  
	  cin>>n;
	  long long int a[n];
	  cin>>a[0];
	  for(i=1;i<n;i++)
	  {cin>>m;
		  a[i]=m;
	  }
	  cin>>m;	
	  long long int b[m],wd[m],hg[m];
	  for(i=0;i<m;i++)
	  {cin>>wd[i]>>hg[i];
		  if(i==0)
		  {b[i]=a[wd[i]-1];}
		  else if(i>0)
		  {if(wd[i]<=wd[i-1])
			  {
				  b[i]=b[i-1]+hg[i-1];
			   }
			  else if(wd[i]>wd[i-1])
			  {
				  b[i]=a[wd[i]-1];
			  }
		  }	  
		  
	  }
	  for(i=0;i<m;i++)
	  {cout<<b[i]<<endl;}
		 return 0;
	 } 
         
