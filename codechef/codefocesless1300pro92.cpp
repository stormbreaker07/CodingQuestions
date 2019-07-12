#include <bits/stdc++.h> 
#include<iostream>
#include<set>
using namespace std;
  
  int main()
  {set<int> s;
      long int m,n,z;
  cin>>n>>m;
  long int a[n],x[n+1];
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  for(int i=n-1;i>=0;i--)
  {s.insert(a[i]);
   x[i+1]=s.size();
  }
  for(int i=1;i<=m;i++)
  {cin>>z;
  cout<<x[z]<<endl;
  }
  return 0;
  }
