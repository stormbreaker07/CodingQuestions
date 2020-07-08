#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,m,q,x,y,count=0;
	cin>>n>>m>>q;
	long int a[n+1]={0},b[m+1]={0};
	for(int j=0;j<q;j++)
	{cin>>x>>y;
		a[x]=a[x]+1;
		b[y]=b[y]+1;
	}
	for(int j=1;j<=n;j++)
	{for(int k=1;k<=m;k++)
		{if((a[j]+b[k])%2!=0)
			{count++;}
		}
	}
	cout<<count<<endl;
    }
	return 0;
}

