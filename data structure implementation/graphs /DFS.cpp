#include <iostream>
#include <vector>
using namespace std;


bool visit[100000];

void dfs(vector<int> ad[],int s)
{
	visit[s] = true;
for(int i=0;i<ad[s].size();++i)
{if(visit[ad[s][i]] == false)
	{dfs(ad,ad[s][i]);
	}
}
}

int main()
{
int nodes,edges,x,y,m,c=0;
cin>>nodes>>edges;
vector<int> ad[nodes+1];

for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
	ad[y].push_back(x);
}

for(int i=0;i<nodes;i++)
{visit[i]=false;}
cin>>m;

dfs(ad,m);

for(int i=1;i<=nodes;i++)
{if(visit[i]== false)
	{
		c++;}
}
cout<<c;

return 0;
}
