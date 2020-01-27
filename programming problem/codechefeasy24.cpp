#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long int t;
	  cin>>t;
	  long int i;
	  for( i=0;i<t;i++)
	  {long long int n;
		  cin>>n;
		  if(n==1)
		  {cout<<"ALICE"<<endl;}
		  else if(n<9)
		  {cout<<"BOB"<<endl;}
		  
		  else if(n>=9)
		  {if(n%3==0)
		  {n=n/3;
			  if(n>2 && n%2!=0 )
			  {cout<<"ALICE"<<endl;}
			  else
			  {cout<<"BOB"<<endl;}
		  }
	      }
	      else 
	      {cout<<"BOB"<<endl;}
	  }
	  return 0;
  }
		  
