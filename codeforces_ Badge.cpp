#include <bits/stdc++.h>
using namespace std;
int c=0;
queue<int> q;



void bfs(vector<int> a[],int x,int visit[])
{c=0;
	int w;
q.push(x);
visit[x]=1;
while(!q.empty())
{
w=q.front();
q.pop();
for(unsigned int i=0;i<a[w].size();i++)
{
	if(visit[a[w][i]]==0)
	{q.push(a[w][i]);
	visit[a[w][i]]=1;
	}
	else if(visit[a[w][i]]==1)
	{cout<<a[w][i]<<" ";
	c=1;
		break;
	}
}
	if(c==1)
	{break;}
}
w=q.size();
for(int i=0;i<w;i++)
{q.pop();}

}



int main()
{
int n,num;
cin>>n;
vector<int> a[n+1];
for(int i=1;i<=n;i++)
{cin>>num;
a[i].push_back(num);	
}

for(int i=1;i<=n;i++)
{int visit[n+1]={0};
	bfs(a,i,visit);


}
	
	
	return 0;
}
