#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{int x,t;
cin>>t;
for(int j=0;j<t;j++)
{
float k=0;
float c=0.00;
cin>>x;
string s;
cin>>s;
for(int i=0;i<x;i++)
{if(s[i]=='P')
{c++;}
}

float w=float(float(75*x)/100);

if(c<w)
{for(int i=2;i<=x-3;i++)
{
    if(s[i]=='A')
    {
        if(s[i-1]=='P' || s[i-2]=='P' && s[i+1]=='P' || s[i+2]=='P')
    {
    k++;
if(k>=w-c)
{
    cout<<int(k)<<endl;
    break;
}
}
}
}
if(k<w-c)
{cout<<"-1"<<endl;}
}
if(c>=w)
{cout<<'0'<<endl;}

}

return 0;
}