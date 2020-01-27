#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  sort(a,a+n);
  for(int i=1; ;i++)
  {if(a[i-1]!=i)
  {cout<<i;
  break;}
  }
  return 0;
  }