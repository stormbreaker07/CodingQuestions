#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

int main()
{int k,l,m,n,d,q,w,e,r;
cin>>k>>l>>m>>n>>d;
vector <int> a(1000000,0);
for(int i=1;i<=d;i++)
{
q=k*i;
a[q]=1;

w=l*i;
a[w]=1;
e=m*i;
a[e]=1;
r=n*i;
a[r]=1;
}
int c=0;
for(int i=1;i<=d;i++)
{if(a[i]==1)
{c++;}
}
cout<<c;

return 0;
}