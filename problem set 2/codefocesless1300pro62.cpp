#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int n;
cin>>n;
int a[n],z[n];
vector<int> v;
vector<int> b;
for(int i=0;i<n;i++)
{cin>>a[i];
z[i]=a[i];
}
int siz=0;
sort(z,z+n);
for(int i=0;i<n;i++)
{if(z[i]!=z[i-1])
{siz++;
v.push_back(z[i]);}
}
cout<<siz<<endl;
int c=0;
for(int i=0;i<siz;i++)
{c=0;
for(int j=0;j<n;j++)
{if(a[j]==v[i])
{c++;
b.push_back(j);
if(c==2)
{break;}
}}
if(c==1)
{cout<<v[i]<<" "<<'0'<<endl;
}
else if(c>1)
{cout<<v[i]<<" "<<b[1]-b[0]<<endl;}
b.clear();
}

return 0;
}