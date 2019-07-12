#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s1,s2,s3;
cin>>s1;
cin>>s2;
cin>>s3;
int w;
vector<int> v1(92,0);
vector<int> v(92,0);
for(int i=0;i<s1.length();i++)
{w=int(s1[i]);
v[w]+=1;}
for(int i=0;i<s2.length();i++)
{w=int(s2[i]);
v[w]+=1;}
for(int i=0;i<s3.length();i++)
{w=int(s3[i]);
v1[w]+=1;}

int c=0;
for(int i=65;i<91;i++)
{if(v[i]!=v1[i])
{c=1;
break;}
}
if(c==1)
{cout<<"NO";}
else
{cout<<"YES";}
return 0;
}