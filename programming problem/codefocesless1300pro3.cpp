#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int a,b;
cin>>a>>b;
string s;
cin>>s;
for(int j=0;j<b;j++)
{
for(int i=0;i<a-1;i++)
{if(s[i]=='B' && s[i+1]=='G')
{swap(s[i],s[i+1]);
i++;
}
}
}
cout<<s;

return 0;
}