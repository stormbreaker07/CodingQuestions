#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>
using namespace std;

       
const int mx=100;       
typedef pair<int,int> pii;                                                                                                                                                                                                                                                                         
vector<pii> adj[mx];
bool mark[mx];

int prim(int x)
{
priority_queue<pii,vector<pii>,greater<pii> > q;
int y;
int mincost=0;
pii p;
q.push(make_pair(0,x));
	while(!q.empty())
	{p=q.top();
		q.pop();
		x=p.second;
		if(mark[x]==true)
		continue;
		mincost += p.first;
		mark[x] = true;
	for(int i=0;i<adj[x].size();i++)
	{y=adj[x][i].second;
		if(mark[y] == false)
		{q.push(adj[x][i]);}
	}
    }
    return mincost;
}
	
	
	 
	


int main()
{int vertex,edges,x,y,weight;
	cin>>vertex>>edges;
	for(int i=0;i<edges;i++)
	{cin>>x>>y>>weight;
		adj[x].push_back(make_pair(weight,y));
		adj[y].push_back(make_pair(weight,x));
	}
	int mn = prim(1);
	cout<<mn;

	return 0;
}
