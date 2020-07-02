#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,c=2,max=0;
  cin>>n;
  int a[n];
  vector<int> v;
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  if(n>2)
  {for(int i=2;i<n;i++)
  {
   if(a[i]==a[i-1]+a[i-2])
  {c++;}
  else 
  {c=2;}
  if(c>max)
  {max=c;}
  }
  cout<<max;
  }
  else 
  {cout<<n;}
  return 0;
  }