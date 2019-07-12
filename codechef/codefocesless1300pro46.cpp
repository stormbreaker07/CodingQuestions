#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y;
cin>>x>>y;
int a[x];
for(int i=0;i<x;i++)
{cin>>a[i];}
sort(a,a+x);
long long int sum=0;
for(int i=0;i<y;i++)
{if(a[i]<0)
    {sum+=a[i];}
}
cout<<abs(sum);
return 0;
}