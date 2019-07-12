#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{ string s;
int x,y;
cin>>x;
s = to_string(x);
y=s.length();
for( ; ; )
{x++;
int t=0;
s = to_string(x);
for(int i=0;i<y;i++)
{for(int j=0;j<y;j++)
{if(i!=j)
{if(s[i]==s[j])
{t=1;}
}}}
if(t==0)
{cout<<x;
break;}
}


return 0;
}