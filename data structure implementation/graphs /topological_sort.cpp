#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> st;
bool visit[10];

/*use dfs to dig deeper and find an end*/
/*it is nothing, just a directed graph and dfs applied on it which then store in stack*/ 

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

/*printing the stack*/

void print()
{
while(!st.empty())
{cout<<st.top()<<" ";
	st.pop();	
}
}



int main()
{
int nodes,edges,x,y,m;
cin>>nodes>>edges;
vector<int> ad[nodes];

for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
	}

for(int i=0;i<nodes;i++)
{visit[i]=false;}

for(int i=0;i<nodes;i++)
{if(visit[i] == false)
{dfs(ad,i);}
}

print();

return 0;
}
