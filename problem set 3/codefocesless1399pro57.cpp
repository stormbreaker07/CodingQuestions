#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int i,n,s,t,w,c=0;
	  cin>>n>>s>>t;
	  long int a[n+1];
	  for(i=1;i<=n;i++)
	  {cin>>a[i];}
	  w=s;
	  if(w==t)
	  {cout<<c;}
	  else if(w!=t)
	{for( ; ; )
		{w=a[w];
			c++;
			if(w==s)
			{c=-1;
				break;}
		else if(w==t)
		{break;}
        }
	cout<<c;
	}
			
		  return 0;
  }
