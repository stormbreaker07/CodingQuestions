#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,w;
cin>>x;
vector<int> b(1001,1004);
vector<int> v; 
vector<int> v1;
int a[x+1];
for(int i=0;i<x;i++)
{cin>>a[i];
w=a[0];}
a[x]=a[0];
int mn=1001;
for(int i=0;i<x;i++)
{if(abs(a[i]-a[i+1])<mn)
{mn=abs(a[i]-a[i+1]);
b[a[i]]=mn;}
}
vector<int>::iterator it;
it=find(b.begin(),b.end(),mn);
w=it-b.begin();
int m;
for(int i=0;i<x;i++)
{if(a[i]==w)
{m=i+1;
v.push_back(m);
}}

int s;
for(int i=0;i<x;i++)
{if(a[i]==w+mn)
{s=i+1;
v1.push_back(s);
}
if(a[i]==w-mn)
{s=i+1;
v1.push_back(s);}
}
int n=0;

for(int j=0;j<v1.size();j++)
{for(int i=0;i<v.size();i++)
{if(v1[j]==v[i]+1 || v1[j]==v[i]-1 || v1[j]+x-1==v[i])
{cout<<v1[j]<<" "<<v[i]<<endl;
n++;
break;
}
}
if(n==1)
{break;}
}

return 0;
}