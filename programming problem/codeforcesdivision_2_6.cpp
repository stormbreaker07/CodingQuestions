#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,m;
	  cin>>n>>m;
	  string s1,s2,s3;
	  string a[2*m];
	  for(int i=0;i<m;i++)
	  {cin>>s1>>s2;
		  if(s1.length()<=s2.length())
		  {s3=s1;
			  a[2*i]=s1;
			  a[2*i+1]=s3;
		  }
		  else
		  {s3=s2;
			   a[2*i]=s1;
			  a[2*i+1]=s3;
		  }
	  }
	  for(int i=0;i<n;i++)
	  { cin>>s1;
		  for(int j=0;j<2*m;j++)
		  {if(a[j]==s1)
			  {cout<<a[j+1]<<" ";
				  break;
			  }
		  }
		  
	  }
	  return 0;
  }
