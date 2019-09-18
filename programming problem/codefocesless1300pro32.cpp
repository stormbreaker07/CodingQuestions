#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y,z;
cin>>x>>y;
vector<int> v,v1;
for(int i=0;i<x;i++)
{cin>>z;
v.push_back(z);
v1.push_back(z);
}
int w=0;
z=0;
for(int j=1;j<=50;j++)
{int k=0;
z=y*j;
int t=v.size();
for(int i=w;i<t;i++)
{k++;
    if(v[i]-y>0)
{v.push_back(v[i]);
t++;}
}
w+=k-1;
}

for(int i=0;i<x;i++)
{if(v1[i]==v[v.size()-1])
{cout<<i;}}
return 0;
}