#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{int t,x,y,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{int n,m,q;
		cin>>n>>m>>q;
		int a[n+1][m+1]={};
		for(int j=1;j<=q;j++)
		{cin>>x>>y;
			for(int k=1;k<=n;k++)
			{a[x][k]=a[x][k]+1;}
			for(int k=1;k<=m;k++)
			{a[k][y]=a[k][y]+1;}
		}
	for(int j=1;j<=n;j++)	
	{for(int k=1;k<=m;k++)
		{
		if(a[j][k]%2!=0)
		{count++;}
		}
	}
	cout<<count<<endl;
    }
	return 0;
}


