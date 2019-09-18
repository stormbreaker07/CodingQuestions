#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s;
cin>>s;
int c=1,t=1;
for(int i=0;i<s.length();i++)
{  if(s[i]==s[i+1] && s[i]=='0')
{c++;}
else if(s[i]!=s[i+1] && s[i]=='0')
{if(c>=7)
{break;}
else 
{c=1;}
}
}
for(int i=0;i<s.length();i++)
{  if(s[i]==s[i+1] && s[i]=='1')
{t++;}
else if(s[i]!=s[i+1] && s[i]=='1')
{if(t>=7)
{break;}
else 
{t=1;}
}
}
if(c>=7 || t>=7)
{cout<<"YES";}
else
{cout<<"NO";}
return 0;
}