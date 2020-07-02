#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,m;
  long int d,w;
  long long int sum=0;
  cin>>n>>m>>d;
  w=n*m;
  long int a[w];
  for(int i=0;i<w;i++)
  {cin>>a[i];}
 sort(a,a+w);
 int mid=w/2;
 for(int i=0;i<w;i++)
 {sum+=abs(a[mid]-a[i]);}
 if(sum%d==0)
 {cout<<sum/d;}
 else 
 {cout<<"-1";}
 return 0;
  }
