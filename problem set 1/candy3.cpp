#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  { long long int t,x,y,i,j,sum;
 cin>>t;
 for( i=1;i<=t;i++)
 {  sum=0;
     cin>>x;
 for(j=1;j<=x;j++)
 {cin>>y;
 sum=sum+(y%x);}
 
  if(sum%x==0)
  {cout<<"YES"<<endl;}
  else
  {cout<<"NO"<<endl;} }
   return 0;   
  }