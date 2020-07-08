#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {string s;
	  cin>>s;
	  int w,a,m=0,c=0,mx=100001,sec;
	  int num=s[s.length()-1]-'0';
	  for(int i=0;i<=s.length()-1;i++)
	  {if((s[i]-'0')%2==0)
		  {c=3;
			  a=s[i]-'0';
			  if(mx>a && a<num)
			  { m=3;
				  mx=a;
			   w=i;
			   break;}
			   else
			   {if(a>num)
				   {
					  sec=i;}
				}
		  }
	  }
	  if(c==3 && m==3)
	  {swap(s[w],s[s.length()-1]);
	  cout<<s;}
	  else if (c==3 && m==0)
	  {swap(s[sec],s[s.length()-1]);
		  cout<<s;}
		   else if(c==0)
		  {cout<<-1;}
	  return 0;
  }
			  
