#include <bits/stdc++.h>
using namespace std;
queue<long int> q;
int level[100000];
int p,num;

void bfs(vector<int> ad[],int x,int y)
{ int visit[100000]={0};
  num=0;
  level[x]=0;
  visit[x]=1;
  q.push(x);
  while(!q.empty())      
{p=q.front();
	q.pop();
for(int i=0;i<ad[p].size();i++)
{
	if(visit[ad[p][i]] == 0)
	{level[ad[p][i]] = level[p]+1;	
     q.push(ad[p][i]);
     visit[ad[p][i]] = 1;
    if(level[ad[p][i]] == y)
    {num++;}
    }
}}
}      




int main()
{
int n,m,e,x,y;
cin>>n>>e;
vector<int> ad[n+1];
for(int i=0;i<e;i++)
{cin>>x>>y;
ad[x].push_back(y);
ad[y].push_back(x);	
}
cin>>m;
for(int i=0;i<m;i++)
{cin>>x>>y;
bfs(ad,x,y);
cout<<num<<endl;
}	


return 0;
}
