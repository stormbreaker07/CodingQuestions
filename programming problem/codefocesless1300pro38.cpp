#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int x,t,mn,c=0;
cin>>x;
unsigned long long int a[x];
mn=1000000012;
for(int i=0;i<x;i++)
{cin>>t;
if(t<mn)
 {mn=t;}
a[i]=t;
}
for(int i=0;i<x;i++)
{if(mn==a[i])
{c++;}
}

if(c>1)
{
cout<<"Still Rozdil";}
else if(c==1)
{
for(int i=0;i<x;i++)
{if(mn==a[i])
{cout<<i+1;}
}
}

return 0;
}
