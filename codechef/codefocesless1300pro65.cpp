#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int a[5];
long int x[6][6];
for(int i=1;i<6;i++)
{for(int j=1;j<6;j++)
{cin>>x[i][j];}}
for(int i=0;i<5;i++)
{a[i]=i+1;}
long long int sum=0,mx=0;
for(int i=0;i<120;i++)
{sum=0;
next_permutation(a,a+5);
sum+=x[a[0]][a[1]]+x[a[1]][a[0]];
sum+=x[a[1]][a[2]]+x[a[2]][a[1]];
sum+=2*(x[a[2]][a[3]]+x[a[3]][a[2]]);
sum+=2*(x[a[3]][a[4]]+x[a[4]][a[3]]);
if(sum>mx)
{mx=sum;}
}
cout<<mx;

return 0;
}