#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long long int n,i,sum=0;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  sort(a,a+n);
  for(i=0;i<n;i++)
  {if(a[i]!=i+1)
  {sum+=abs(a[i]-(i+1));}
  }
  cout<<sum;
  return 0;
  }