#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int x,t,a;
cin>>x>>t;
vector<int> v;
for(long int i=0;i<t;i++)
{cin>>a;
if(i==0)
{v.push_back(a);}
else if(i!=0)
{if(a!=v[i-1])
{v.push_back(a);}
}
}
long long int sum=0,c,z;
t=1;
for(long int i=0;i<v.size();i++)
{if(v[i]>=t)
{z=v[i]-t;
sum+=z;
t=v[i];
}
else if(v[i]<t)
{c=x-t+1;
z=v[i]-1;
sum+=c+z;
t=v[i];
}
}
cout<<sum;


return 0;}