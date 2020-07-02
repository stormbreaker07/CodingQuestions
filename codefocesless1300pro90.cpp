#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long int i,j,n,m,s,d;
   int x;
  cin>>n;
  long long int sum=0;
  long long int a[n],w[n],sm1[n+1],sm2[n+1];  
  sm1[0]=0;
  sm2[0]=0;
  for(i=0;i<n;i++)
  {cin>>a[i];
  sm1[i+1]=a[i]+sm1[i];
  w[i]=a[i];}
  sort(w,w+n);
  for(int i=0;i<n;i++)
  {sm2[i+1]=w[i]+sm2[i];}
    cin>>m;
    for(i=0;i<m;i++)
    {cin>>x>>s>>d;
    if(x==1)
    {cout<<sm1[d]-sm1[s-1]<<endl;}
    else if(x==2)
    {cout<<sm2[d]-sm2[s-1]<<endl;}
    }
    return 0;
    }