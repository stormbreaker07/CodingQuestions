#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int c=0;

void bfs(vector<int> v[],int t,int n)
{int w;
	int visit[n+1]={0};
q.push(1);
visit[1]=1;
while(!q.empty())
{w=q.front();
	q.pop();
	for(int i=0;i<v[w].size();i++)
	{if(visit[v[w][i]]==0)	
	{q.push(v[w][i]);
	visit[v[w][i]]=1;}
    if(v[w][i]==t)
    {c=1;
		break;}
    }
    if(c==1)
    {break;}
}
}



int main()
{
int n,y;
cin>>n>>y;
int a[n+1];
vector<int> v[n+1];
for(int i=1;i<n;i++)
{cin>>a[i];}
for(int i=1;i<n;i++)
{v[i].push_back(a[i]+i);
}	

bfs(v,y,n);
if(c==1)
{cout<<"YES";}
else if(c==0)
{cout<<"NO";}

	
	return 0;
}
