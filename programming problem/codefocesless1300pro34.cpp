#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int page;
cin>>page;
int a[8];
for(int i=1;i<8;i++)
{cin>>a[i];}
int c=0,y=1;
while(y>0)
{
for(int i=1;i<8;i++)
{y=page-a[i];
if(y<=0)
{cout<<i;
c=1;
break;}
page=y;
}
}
return 0;
}