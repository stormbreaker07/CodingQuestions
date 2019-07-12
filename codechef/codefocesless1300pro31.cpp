#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
cin>>x;
x+=1;
int sum=0,y;
for(int i=1;i<x;i++)
{cin>>y;
sum+=y;
}
int num,c=0;
for(int i=1;i<=5;i++)
{num=sum+i;
if((num-1)%x!=0)
{c++;}
num=0;
}
cout<<c;
return 0;
}