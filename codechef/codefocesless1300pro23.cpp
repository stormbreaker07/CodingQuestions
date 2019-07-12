#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s;
cin>>s;
int w;
vector<int> v(125,0);
for(int i=0;i<s.length();i++)
{w=int(s[i]);
v[w]=1;
}
int c=0;
for(int i=89;i<125;i++)
{if(v[i]==1)
{c++;}
}
if(c%2==0)
{cout<<"CHAT WITH HER!";}
else
{cout<<"IGNORE HIM!";}

return 0;
}