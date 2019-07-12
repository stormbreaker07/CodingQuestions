#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
int d[1000100];

  int main()
  {
  int a,b,c,i,j,k;
  long long int e=0;

for(i = 1;i<=1000000;i++)
{for(j = i;j<=1000000;j+=i)
{d[j]++;}}
	 
cin>>a>>b>>c;
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
{for(k=1;k<=c;k++)
{e+=d[i*j*k];
}}}
cout<<e;
return 0;
}