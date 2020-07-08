#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y;
cin>>x>>y;
int a[x][y];
int mx=0,x1,y1;
for(int i=0;i<x;i++)
{for(int j=0;j<y;j++)
{cin>>a[i][j];
if(a[i][j]>mx)
{mx=a[i][j];
x1=i;
y1=j;}
}}
int w=a[0][0];
cout<<x1<<" "<<y1;
cout<<endl<<w;
return 0;
}