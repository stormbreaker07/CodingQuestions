#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long int x,c=0;
  cin>>x;
  long long mx=0,mn=1000000007;
  long long int a[x],b[x];
  for(long int i=0;i<x;i++)
  {cin>>a[i]>>b[i];
if(a[i]<mn)
{mn=a[i];
}
if(b[i]>mx)
{mx=b[i];}
}
for(long int i=0;i<x;i++)
{if(a[i]==mn && b[i]==mx )
{cout<<i+1;
c=1;
break;
}
else
{c=2;} 
}
if(c==2)
{cout<<"-1";}
return 0;
}