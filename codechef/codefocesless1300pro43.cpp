#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{string s1,s2;
cin>>s1;
cin>>s2;
int c=0;
int s=s1.length()-1;
{for(int i=0;i<=s;i++)
{if(s1[i]!=s2[s-i])
{c=1;
break;}
}}
if(c==1)
{cout<<"NO";}
else if(c==0)
{cout<<"YES";}
return 0;
}