#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int t;
	  cin>>t;
	  for(int i=0;i<t;i++)
	  {int n,c=0;
		  cin>>n;
		  int a[n];
		  for(int j=0;j<n;j++)
		  {cin>>a[j];}
	  for(int j=0;j<n-2;j++)
	  {for(int k=j+2;k<n;k++)
		{if(a[j]>a[k])
			{c++;
			break;}
		}
		if(c>0)
		{break;}
	  }
	  if(c>0)
	  {cout<<"NO"<<endl;}
	  else if(c==0)
	  {cout<<"YES"<<endl;}
    }
    return 0;
}  
