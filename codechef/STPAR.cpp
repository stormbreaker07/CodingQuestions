#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
stack <int> s1;
stack <int> s2;
vector<int> v;
int n;
for( ; ; )
{cin>>n;
if(n==0)
{break;}
int a[n];
for(int i=n-1;i>=0;i--)
{cin>>a[i];
}
for(int i=0;i<n;i++)
{s1.push(a[i]);}
sort(a,a+n);
int i=0;
while(!s1.empty())
{
    if(a[i]==s1.top() )
{
    v.push_back(s1.top());
s1.pop();
i++;
}

else if(a[i]!=s1.top() && s2.size()>0 && a[i]==s2.top() )
{v.push_back(s2.top());
s2.pop();
i++;}

else if(a[i]!=s1.top() )
{
s2.push(s1.top());
s1.pop();
}

}
while(!s2.empty())
{v.push_back(s2.top());
s2.pop();
}

int c=0;
for(int i=0;i<n;i++)
{
    if(a[i]==v[i])
{c++;}
}
if(c==n)
{cout<<"yes"<<endl;}
else
{cout<<"no"<<endl;}
v.clear();
}
return 0;    
}