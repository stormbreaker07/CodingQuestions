#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{long int x,y,z,i;
	vector<int> v;
cin>>x>>y>>z;
long int a[x+y+z];
for(i=0;i<x+y+z;i++)
{cin>>a[i];}
sort(a,a+x+y+z);
for(i=1;i<x+y+z;i++)
{ 
if(a[i]==a[i-1])
{v.push_back(a[i]);
a[i]=-1;
a[i-1]=-1;}
}
cout<<v.size()<<endl;
for(i=0;i<v.size();i++)
{cout<<v[i]<<endl;}
return 0;
}
