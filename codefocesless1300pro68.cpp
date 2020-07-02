#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s,s1;
getline(cin,s);
getline(cin,s1);
sort(s.begin(),s.end());
sort(s1.begin(),s1.end());

int j=0;
while(s1[0]==32)
{if(s[0]==32)
{s.erase(s.begin());}
if(s1[0]==32)
{s1.erase(s1.begin());
}   
}
int t=s1.length();
for(long long int i=0;i<s.length();i++)
{if(s[i]==s1[j])
{j++;
}
}
if(t==j)
{cout<<"YES";}
else
{cout<<"NO";}

return 0;

}