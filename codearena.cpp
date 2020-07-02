#include <iostream>
#include <vector>
using namespace std;

/*
void dfs(int s)
{visit[s] = true;
for(int i=0;i<ad[s].size();i++)
{if(visit[ad[s][i]] == false)
	{dfs(ad[s][i]);
	}
}}*/

int main()
{
	
int n,m,x,y;
cin>>n>>m;

vector<int> ad[n+1];
int pre[n];
int pos[n];

vector<int> visit(n+1,0);


for(int i=0;i<m;i++)
{cin>>x>>y;
	pre[i] = x;
	pos[i] = y;
ad[x].push_back(y);
ad[y].push_back(x);	
}
int q,cas;
cin>>q;
for(int i=0;i<q;i++)
{
cin>>cas;
ad[pre[cas-1]].erase(pos[cas-1]);
for(int j=0;j<ad[pre[cas-1]].size();j++)
{cout<<ad[pre[cas-1]][j]<<endl;
}
}




	
	return 0;
}
