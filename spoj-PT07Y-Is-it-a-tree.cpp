#include<bits/stdc++.h>
using namespace std;


int cot = 0;


bool *dfs(vector<int> ad[],bool visit[],int m,int parent)
{
		visit[m] = true;
	for(unsigned int i=0;i<ad[m].size();i++)
	{
		if(visit[ad[m][i]]==false)
		{
			parent = m;
			dfs(ad,visit,ad[m][i],parent);
		}
		else
		{
			if(ad[m][i]!=parent)
			{
				cot = 1;
					break;
			}
		}
	}
return visit;	
}	
	





int main()
{
	int n,m;
	cin>>n>>m;
	bool  visit[n+1];
	for(int i=0;i<=n;i++)
	{visit[i] = false;}
	int x,y;
	vector<int> v[n+1];
	int w;
	for(int i=0;i<m;i++)
	{cin>>x>>y;
		if(i==0)
		{w = x;}
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	bool *p;
	
	p = dfs(v,visit,w,0);
	
	for(int i=1;i<=n;i++)
	{
	if(p[i]!=true)
	{cot=1;}	
	}
	
	
	if(cot==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	return 0;
}
