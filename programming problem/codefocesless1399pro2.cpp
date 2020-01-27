#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,sum=0,c=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];
  sum+=a[i];
  }
  for(int i=0;i<n;i++)
  {if((sum-a[i])%2==0)
  {c++;}
  }
  cout<<c;
  return 0;
  }