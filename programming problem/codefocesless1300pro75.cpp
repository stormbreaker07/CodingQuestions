#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int x,k,num,j=0;
  long long int mx=0,mn;
  vector<int> a;
  cin>>x>>k;
  for(long int i=0;i<x;i++)
  {cin>>num;
  a.push_back(num);
  if(i<k)
  {mx=mx+num;}
  }
  mn=mx;
  for(long int i=0;i<x-k;i++)
  {mn=mn-a[i]+a[k+i];
  if(mn<mx)
  {mx=mn;
  j=i+1;}
  }
  cout<<j+1;
  return 0;
  }