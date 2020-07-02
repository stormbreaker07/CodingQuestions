#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
long int n,num,div;
vector<long int> v;
cin>>n>>div;
for(long int i=0;i<n;i++)
{cin>>num;	
v.push_back(num);
}
long int i=0,c=0;
sort(v.begin(),v.end(),greater<int>());	
for( ;i<n-1; )
{
	if(v[i]-v[i+1]<=div)
	{c++;
	i=i+2;
	}
	else
	{i=i+1;}
}
cout<<c;




	return 0;
}
