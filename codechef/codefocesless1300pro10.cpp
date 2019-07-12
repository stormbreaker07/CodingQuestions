#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{int w;
string s;
cin>>w;
cin>>s;
for(int i=0;i<s.length();i++)
{
while(s[i]==s[i+1])
{s.erase(i+1,1);
}
}
cout<<w-s.length();

return 0;
}