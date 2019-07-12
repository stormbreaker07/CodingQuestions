#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s1,s2;
cin>>s1;
cin>>s2;
int l;
l=s2.length();
for(int i=0;i<l;i++)
{if(s1[i]!=s2[i])
{cout<<'1';}
else
{cout<<'0';}
}

return 0;
}