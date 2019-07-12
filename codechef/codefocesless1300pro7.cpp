#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int cap=0,sma=0;
string s;
cin>>s;
int w=s.length();
for(int i=0;i<w;i++)
{if(s[i]>=65 && s[i]<=90)
{cap++;}
else
{sma++;}
}
if(sma>=cap)
{for(int i=0;i<w;i++)
{if(s[i]>=65 && s[i]<=90)
{s[i]=s[i]+' ';
cout<<s[i];}
else
{cout<<s[i];
}
}}
else
{for(int i=0;i<w;i++)
{if(s[i]>=97 && s[i]<=122)
{s[i]=s[i]-' ';
cout<<s[i];}
else
{cout<<s[i];}
}
}

return 0;
}