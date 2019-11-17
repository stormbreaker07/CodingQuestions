#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> st;
bool visit[10];
int w;


void dfs(vector<int> ad[],int s)
{
	visit[s] = true;
for(int i=0;i<ad[s].size();i++)
{if(visit[ad[s][i]] == false)
	{dfs(ad,ad[s][i]);
	}
}
/*crucial point*/
	st.push(s);
}

void dfsuntil(vector<int> up[],int s)
{
	visit[s] = true;
cout<<s<<" ";
for(int i=0;i<up[s].size();i++)
{if(visit[up[s][i]] == false)
	{dfsuntil(up,up[s][i]);
	}
}
}

int main()
{
int nodes,edges,x,y,m;
cin>>nodes>>edges;
vector<int> ad[nodes];
vector<int> up[nodes];

for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
	up[y].push_back(x);
	}

for(int i=0;i<nodes;i++)
{visit[i]=false;}

for(int i=0;i<nodes;i++)
{if(visit[i] == false)
{dfs(ad,i);}
}

/*after reversing graph*/

for(int i=0;i<nodes;i++)
{visit[i]=false;}


while(!st.empty())
{w=st.top();
	st.pop();
if(visit[w] == false)
{dfsuntil(up,w);
cout<<endl;
}
}

return 0;
}




