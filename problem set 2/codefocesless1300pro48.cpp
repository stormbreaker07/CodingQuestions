#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,z;
cin>>x;
vector<int> v;
for(int i=0;i<12;i++)
{cin>>z;
v.push_back(z);}
sort(v.begin(),v.end(),greater<int>());

int c=0,w=0,sum=0;
if(x==0)
{cout<<'0';}
else if(x>0)
{for(int i=0;i<v.size();i++)
{sum+=v[i];
w++;
if(sum>=x)
{c++;
break;
}}
if(c==0)
{cout<<"-1";}
else if(c==1)
{cout<<w;}
}
return 0;
}
