#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int t;
long long int x1,x2,y1,y2,x,y;
char ch1,ch2;
cin>>t>>x1>>y1>>x2>>y2;
string s;
cin>>s;
 y=y2-y1;
x=x2-x1;
if(x>0)
{ch1='E';
x=x2-x1;}
if(x<0)
{ch1='W';
x=x1-x2;}
if(y>0)
{ch2='N';
y=y2-y1;}
if(y<0)
{ch2='S';
y=y1-y2;}
for(int i=0;i<s.length();i++)
{if(s[i]==ch1)
{x--;}
if(s[i]==ch2)
{y--;}
if(x==0 && y==0)
{cout<<i+1;
break;}
}
if(x!=0 || y!=0)
{cout<<"-1";}
return 0;
}
