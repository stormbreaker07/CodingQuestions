#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
vector<int> c;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
{cin>>a[i];
}
int y;
cin>>y;
int b[y];
for(int i=0;i<y;i++)
{cin>>b[i];}
int mx,m=0,w,q;
for(int i=0;i<y;i++)
{mx=0;
for(int j=0;j<x;j++)
{w=b[i]%a[j];
q=b[i]/a[j];
if(w==0)
{if(mx<q)
{mx=q;}
}
}
if(mx>m)
{m=mx;}
c.push_back(mx);
}
int no=0;
for(int i=0;i<c.size();i++)
{if(m==c[i])
{no++;}
}
cout<<no;
return 0;
}
