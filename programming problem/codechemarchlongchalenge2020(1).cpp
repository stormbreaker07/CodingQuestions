#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		int a[2][n];
		vector<int> v(m+1,-1);
		for(int j=0;j<n;j++)
		{cin>>a[0][j];}
		
		for(int j=0;j<n;j++)
		{cin>>a[1][j];}
		
		for(int j=0;j<n;j++)
		{
			if(v[a[0][j]]==-1)
			{
				v[a[0][j]] += a[1][j]+1;
			}
			else
			{
				v[a[0][j]] += a[1][j];
			} 
		}
		
		sort(v.begin(),v.end());
		for(int j=0;j<m+1;j++)
		{
		if(v[j]!=-1)
		{	cout<<v[j]<<endl;
			break;
		}
		}
			
	}
	
	return 0;
}
