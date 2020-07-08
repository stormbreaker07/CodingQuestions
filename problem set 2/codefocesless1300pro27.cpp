#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s;
cin>>s;
int c=0;
for(int i=0;i<s.length();i++)
{if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
{c=1;
break;}
else
{c=0;
}
}
if(c==1)
{cout<<"YES";}
else
{cout<<"NO";}

return 0;
}