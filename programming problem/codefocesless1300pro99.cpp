#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  { int n,y=0;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  {cin>>a[i]>>b[i];}
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(j!=i && a[i]==b[j])
          {y++;
          break;}
      }
  }
cout<<n-y;
  return 0;
  }