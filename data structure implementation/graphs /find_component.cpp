#include <iostream>
#include <vector>
using namespace std;

vector<int> ad[10];
bool visit[10];

void dfs(int s)
{visit[s] = true;
for(int i=0;i<ad[s].size();i++)
{if(visit[ad[s][i]] == false)
	{dfs(ad[s][i]);
	}
}}

int main()
{int nodes,edges,x,y,conected_component=0;
cin>>nodes>>edges;
for(int i=0;i<edges;i++)
{cin>>x>>y;
ad[x].push_back(y);
ad[y].push_back(x);	
}

for(int i=0;i<10;i++)
{visit[i] = false;
}

for(int i=1;i<=nodes;i++)
{if(visit[i] == false)
	{dfs(i);
	conected_component++;
	}
}
cout<<conected_component;
return 0;
}
