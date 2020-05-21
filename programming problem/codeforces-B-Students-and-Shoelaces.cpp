#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1][n+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		a[x][y]=1;
	}
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{count =0;
			/*for finding no. of reprimanded students*/
			for(int k=1;k<n;k++)
			{
				if(a[j][k]==1)
				{count++;}
				
			}
		}
		
	}
	

}
