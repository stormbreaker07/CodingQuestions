#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{ 
int n,num;
cin>>n;
vector<int> a[n+1];
for(int i=2;i<=n;i++)
{cin>>num;
a[num].push_back(i);
}
int c=0,w=0;
for(int i=0;i<=n;i++)
{c=0;
	if(a[i].size()>0)
{
for(int j=0;j<a[i].size();j++)
{
if(a[a[i][j]].size()==0)
{c++;}
}
if(c<3)
{w=2;
break;}
}
}
if(w==2)
{cout<<"No";}
else
{cout<<"Yes";}	
 		
 	
return 0;
}
	
