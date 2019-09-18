#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int n,x,y,l1=0,l2=0,r1=0,r2=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>x>>y;
if(x==1)
{l1++;}
else
{l2++;}
if(y==1)
{r1++;}
else
{r2++;}
}
int w=0;
if(l1>=l2)
{w=l2;}
else if(l1<l2)
{w=l1;}
if(r1>=r2)
{w=w+r2;}
else if(r1<r2)
{w=w+r1;}
cout<<w;
return 0;
}