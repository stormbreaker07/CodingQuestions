#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int x;
cin>>x;
long long int a[x];
long long int mx=0,mn=1000000006,w;
long long int c=0,b=0;
for(long int i=0;i<x;i++)
{cin>>a[i];
if(a[i]>=mx)
{mx=a[i];}
if(a[i]<=mn)
{mn=a[i];}
}

for(long int i=0;i<x;i++)
{if(mx!=mn)
{if(a[i]==mx)
{b++;}
if(a[i]==mn)
{c++;}
}
}
if(mx==mn)
{for(int i=0;i<x;i++)
{b+=i;
}
c=1;
}
w=b*c;
cout<<(mx-mn)<<" "<<w;

return 0;
}
