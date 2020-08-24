
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int n;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j] = m[i] & m[j];	
		}
	}
	
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int ans=0;
	
	for(int i=x1;i<=x2;i++)
	{
		for(int j = y1;j<=y2;j++)
		{
			if(i == x1 && j == y1)
			{ans = a[i][j];}
			else
			{
				ans ^= a[i][j];
			}
		}
	}
	
	cout<<ans<<endl;
	
	int xans=0,nw;
	
	for(int j=y1;j<=y2;j++)
		{
			if(j==y1) 
			{
				nw = m[j];
			}
			else
			{
				nw ^= m[j]; 
			}
		}
	int w;
	for(int i=x1;i<=x2;i++) {
	
		if(i==x1)
		{
			xans = m[i] & nw;
		}
		else
		{
			w = m[i] & nw;
			xans ^= w;
		}
		
	}
	cout<<xans<<endl;

return 0;
}
