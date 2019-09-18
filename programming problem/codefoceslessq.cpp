#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int n,ans;
cin>>n;
if(n%2!=0)
{cout<<"0";}
else 
{
int t=n/2;
ans=pow(2,t);
cout<<ans;
}
return 0;
}