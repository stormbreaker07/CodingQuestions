#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
    string s,t;
cin>>x;
cin>>s;
cin>>t;
int j=0;
for(int i=0;i<x;i++)
{if(s[i]==t[j])
{j++;
}
else if(s[i]!=t[j])
{j=0;}
}
cout<<x-j;
return  0;
}