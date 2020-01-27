#include<bits/stdc++.h>
using namespace std;

int m,c=0;

int main()
{
int t,n;

cin>>t;
for(int i=0;i<t;i++)
{cin>>n>>m;	
	c=0;
vector<int> v;
int a;
for(int j=0;j<n;j++)
{cin>>a;
v.push_back(a);}	
int sum =0;
for(int i=0;i<int(pow(2,n));i++)
{ sum=0;
	for(int j=0;j<n;j++)
	{if(i&(1<<j))
		{
			sum = sum+v[j];
		}
	}
if(sum == m)
{c=1;}
}





if(c==1)
{cout<<"Yes"<<endl;}
else
{cout<<"No"<<endl;}
}	
	
	
	
	return 0;
}
