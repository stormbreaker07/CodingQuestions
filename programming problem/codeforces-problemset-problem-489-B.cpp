#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	int m;
	cin>>m;
	int g[m];
	for(int i=0;i<m;i++)
	{
		cin>>g[i];
	}
	
	sort(b,b+n);
	sort(g,g+m);
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(g[j]!=-1)
			{
				if(b[i] == g[j] || b[i] == g[j]-1 || b[i] == g[j]+1)
				{
					count++;
					g[j] = -1;
					break;
				}
			}
		}
	}
	cout<<count;
	
	return 0;
}
