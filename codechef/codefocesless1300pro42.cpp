#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{string s;
cin>>s;
int c=0;
for(long long int i=0;i<s.length();i++)
{
if(s[0]=='4')
{c=1;
break;}
if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
{c=1;
break;}
if(s[i]=='1' || s[i]=='4')
{c=0;
}
else 
{c=1;
break;}
}
if(c==1)
{cout<<"NO";
}
else if(c==0)
{cout<<"YES";
}
return 0;
}




