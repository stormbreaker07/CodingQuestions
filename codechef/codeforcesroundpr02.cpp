#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int x,n,w,sum=0,m=1;
  cin>>n;
  for(long int i=0;i<n;i++)
  {cin>>x;
  sum=0;
  m=1;
  vector<long int> a(200001,0);
  /*array*/
  for(long int j=0;j<x;j++)
  {cin>>w;
  a[w]+=1;}
sort(a.begin(),a.end(),greater<int>());
for(int k=0;k<7;k++)
{cout<<a[k];}
for(int l=0;l<200001;l++)
{
if(a[l]>0)
{if(a[l]==a[l-1] && a[l]-m>0)
{sum+=a[l]-m;
m++;
}
else if(a[l]!=a[l-1])
{sum+=a[l];}
}
else if(a[l]==0)
{break;}
cout<<sum<<endl;
}
cout<<sum<<endl;

}
  return 0;
  }