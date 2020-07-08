#include <bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
string s;
for(int i=0;i<t;i++)
{
 int a[10] = {0};	
 cin>>n;
 for(int j=0;j<n;j++)
 {cin>>s;
  for(int k=0;k<s.length();k++)
  {if(s[k]=='1')
	 {a[k]=1-a[k];}
  }
 }
 int mx=0;
 for(int j=0;j<10;j++)
 {if(a[j]==1)
	 {mx++;}
 }
 cout<<mx;
}
 
 
 
 return 0;
}
  	 	
 	
		
