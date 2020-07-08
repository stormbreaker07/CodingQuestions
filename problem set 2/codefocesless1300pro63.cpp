#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s,s1;
cin>>s;
sort(s.begin(),s.end());
int k=0,e=0,w=1,c=0;
for(int i=0;i<s.length();i++)
{if(s[i]==s[i+1])
{   w++;
}
if(s[i]!=s[i+1])
{
    if(w%2==0)
{e++;}
else
{k++;}
w=1;
}
}
if(s.length()<=1)
{cout<<"First";}
else if(s.length()>1)
for(int i=0;i<s.length();i++)
{if(k<=1)
{cout<<"First";
break;}
else if(k==2)
{if(c%2!=0)
{cout<<"First";
break;}
else
{
cout<<"Second";}
break;}
if(k>2)
{k--;
c++;}
}
return 0;
}