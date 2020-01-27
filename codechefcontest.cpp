#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
	string choco;
	long long int n,num=0,add=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n>>choco;
   add=0; 
     for (int j = 0; j < choco.length(); j++) 
       {  add= (add*10 + (int)choco[j] - '0') %n; }
		num=n-add;
      if(add==num)
      {cout<<2*num-1<<endl;}
      else 
      {if(add>num)
		  {cout<<2*num<<endl;}
		  else if(add<num)
		  {cout<<2*add<<endl;}
      }
 }
	return 0;
} 
