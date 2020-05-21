#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	for(int w=0;w<t;w++)
	{cin>>n>>m;
		long int a[n][m];
		for(int i=0;i<n;i++)
		{for(int j=0;j<m;j++)
			{cin>>a[i][j];}
		}
		long count=0;
		int x,y,z;
		for(int i=0;i<n;i++)
		{
		  for(int j=0;j<m;j++)
			{z=min(n-1-i,m-1-j);
			y=min(i,j);
			x=min(z,y);
			if(i==0 || j==0)
			{count++;}
			else if(i==n-1 || j==m-1)
			{count++;}
			else
			{for(int k=0;k<=x;k++)
			{
			  if((a[i-k][j] == a[i+k][j]) && (a[i][j-k] == a[i][j+k]))
			  {count++;}
			  else 
			  {break;}
			}}
			}
		}
		cout<<count<<endl;
	}
	
	
	return 0;
}
