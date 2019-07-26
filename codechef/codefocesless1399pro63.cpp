#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,m,i,index1,index2,num1; 
	  cin>>n>>m;
	  long long int a[n],count=0;
	  for(i=0;i<n;i++)
	  {cin>>a[i];}
	  for(int i=0;i<m;i++)
	  {cin>>num1;
		  if(num1==1)
		  {cin>>index1>>index2;
			  a[index1-1]=index2-count;
		  }
		  else if(num1==2)
		  {cin>>index1;
			 count+=index1;
			 }
		  else if(num1==3)
		  {cin>>index1;
			  cout<<a[index1-1]+count<<endl;
		  }
	 }
	return 0;
}	
