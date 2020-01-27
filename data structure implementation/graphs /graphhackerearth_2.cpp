#include <bits/stdc++.h>
using namespace std;
queue<long int> q;
int level[10000+1];
int p,num;

void bfs(vector<int> ad[],int w,int n)
{int visit[10000+1]={0};

q.push(w);
visit[w] = 1;
level[w] = 0;	
while(!q.empty())
{
	p=q.front();
q.pop();
for(int i=0;i<ad[p].size();i++)
{if(visit[ad[p][i]] == 0)
 {level[ad[p][i]] = level[p]+1;
  q.push(ad[p][i]);
  visit[ad[p][i]]=1; 
 }}}
}

int main()
{
long int t,n,m,x,y;
cin>>t;
for(int i=0;i<t;i++)
{
	cin>>n>>m;
	vector<int> ad[n+1];
	for(int j=0;j<m;j++)
	{cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	
bfs(ad,1,n);
cout<<level[n]<<endl;
}

return 0;
}
