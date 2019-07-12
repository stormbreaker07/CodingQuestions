#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,c,mx=0;
  long int a[3];
  cin>>n>>a[0]>>a[1]>>a[2];
   sort(a,a+3);
  for(int j=0;j<=n;j++)
    {for(int k=0;k<=n;k++)
    {c=n-(a[0]*k+a[1]*j);
    if(c>=0&&c%a[2]==0)
    {mx=max(mx,(j+k+c/a[2]));}
    }}
  
    cout<<mx;
   return 0;
  }


