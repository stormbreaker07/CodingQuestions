#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,c=1,max=0;
  cin>>n;
  int x[n],y[n];
  for(int i=0;i<n;i++)
  {cin>>x[i]>>y[i];}
  if(n>1)
  {for(int i=0;i<=n-2;i++)
  {if(x[i]==x[i+1] && y[i]==y[i+1])
  {c++;}
  else 
  {c=1;}
  if(c>max)
  {max=c;}
  }
  cout<<max;
  }
  else if(n<=1)
  {cout<<"1";}
  return 0;
  }