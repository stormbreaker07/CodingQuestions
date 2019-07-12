#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long long int y,k,n,w,m,a;
  cin>>y>>k>>n;
  if(y>=n)
  {cout<<"-1";}
  else if(y<n)
  {if(k<=y)
  {m=y/k;
  for(long long int i=m;i<=n;i++)
  {w=k*i;
  if(w<=n && w>y)
  {w=w-y;
  a=1;
  cout<<w<<" ";
  }
  else if(w>n)
  {if(a!=1)
  {cout<<"-1";}
    break;}
  }}
 else if(k>y)
 {for(long long int i=1;i<10000000000;i++)
  {w=k*i;
  if(w<=n)
  {w=w-y;
  a=1;
  cout<<w<<" ";
  }
  else if(w>n)
  {if(a!=1)
  {cout<<"-1";}
    break;}
  }}}
  return 0;
  }