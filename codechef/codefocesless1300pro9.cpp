#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s;
cin>>s;
int c=0;
for(int i=0;i<s.length();i++)
{if(s[i]=='7' || s[i]=='4')
{c++;}}
if(c==7 || c==4)
{cout<<"YES";}
else
{cout<<"NO";}
return 0;
}
