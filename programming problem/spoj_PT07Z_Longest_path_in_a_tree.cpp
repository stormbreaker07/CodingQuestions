#include<bits/stdc++.h>
using namespace std;


int val =0;
int far;

void dfs(vector<int> v[],int vis[],int m,int num)
{	num++;
	 if(num>val)
			{val = num;
			far = m;}
	vis[m] =1;
	for(unsigned int i=0;i<v[m].size();i++)
	{
		if(vis[v[m][i]]!=1)
	{
 			dfs(v,vis,v[m][i],num);
		}
	
	}
}




int main()
{
	int n;
	cin>>n;
	vector<int> v[n+1];
	int x,y,ind;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		if(x==1)
		{ind = x;}
		v[x].push_back(y);
		v[y].push_back(x);
		
	}
	val = 0;
	int vis[n+1] = {0};
	dfs(v,vis,ind,-1);
	int visit[n+1] = {0};
	val = 0;
	dfs(v,visit,far,-1);
	cout<<val;
	
	return 0;
}
