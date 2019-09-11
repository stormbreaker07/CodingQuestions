		#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int t;
	  cin>>t;
	  for(int i=0;i<t;i++)
	  {string s;
		  cin>>s;
	  int w=count(s.begin(),s.end(),'1');
	  if(w%2!=0)
	  {cout<<"WIN"<<endl;}
	  else
	  {cout<<"LOSE"<<endl;}
	  
	  }
	  return 0;
  }
	  
		  
