#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int x,y,z;
cin>>x>>y>>z;
long long int vol,ans;
vol=sqrt(x*y*z);
ans=4*((vol/x)+(vol/y)+(vol/z));
cout<<ans;
return 0;
}