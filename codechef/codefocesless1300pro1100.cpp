#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,c=0;
  cin>>n;
  int a[3];
  for(int i=0;i<n;i++)
  {cin>>a[0]>>a[1]>>a[2];
sort(a,a+3,greater<int>());
if(a[0]==a[1] && a[0]==1)
{c++;}
  }
    cout<<c;
    return 0;
  }