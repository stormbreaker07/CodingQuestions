#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
cin>>x;
    string s;
cin>>s;
vector<char> v;
vector<char> b;
sort(s.begin(),s.end());
v.push_back(s[0]);
for(int i=1;i<s.length();i++)
{if(s[i]!=s[i-1])
{v.push_back(s[i]);}
}
int c=0,t=0;
int w=v.size();
int a[w];

for(int i=0;i<w;i++)
{c=0;
    for(int j=0;j<s.length();j++)
    {if(v[i]==s[j])
    {c++;}
    }
    a[i]=c;

if(a[i]%x!=0)
{t=1;
break;
}
else if(a[i]%x==0)
{a[i]=a[i]/x;}
}
if(t!=1)
{for(int i=0;i<w;i++)
{
    for(int j=0;j<a[i];j++)
    {b.push_back(v[i]);
    }

}

for(int i=1;i<=x;i++)
{
    for(int j=0;j<b.size();j++)
    {cout<<b[j];}
}
}
else if(t==1)
{cout<<"-1";}

return 0;
}