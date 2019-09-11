#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {string s;
	  cin>>s;
	  int k,mx=0;
	  cin>>k;
	  int a[123];
	  for(int i=97;i<=122;i++)
	  {cin>>a[i];
		  mx=max(mx,a[i]);
	  }
	  long int sum=0;
	  for(int i=0;i<s.length();i++)
	  {sum+=a[int(s[i])]*(i+1);
	  }
	  for(int i=s.length()+1;i<=s.length()+k;i++)
	  {sum=sum+mx*i;}
	  cout<<sum;
	  return 0;
  }
