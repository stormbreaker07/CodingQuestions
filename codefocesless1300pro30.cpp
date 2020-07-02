#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int x,t;
cin>>x;
long long int a[1000002];
for(long int i=0;i<x;i++)
{cin>>t;
a[t]=i+1;}
long int y,w;
long long int sum1=0,sum2=0;
cin>>y;
for(long int i=0;i<y;i++)
{cin>>w;
sum1+=a[w];
sum2+=x-a[w]+1;
}
cout<<sum1<<" "<<sum2;

return 0;
}
