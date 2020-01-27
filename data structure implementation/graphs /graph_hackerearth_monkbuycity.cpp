#include <bits/stdc++.h>
using namespace std;
queue<long int> q;
int visit[10001]={0};


void bfs(vector<int> ad[],int x)
{
	q.push(x);
	int w;
	visit[x]=1;
	while(!q.empty())
	{w=q.front();
		q.pop();
		for(int i=0;i<ad[w].size();i++)
		{if(visit[ad[w][i]] == 0)
		{
		 q.push(ad[w][i]);
		 visit[ad[w][i]] = 1;
		 }
		}
	}
}



int main()
{vector<int> a;
int t,n,x,y,c;
cin>>t;
for(int i=0;i<t;i++)
{cin>>n;
	c=0;
	vector<int> ad[10001];
	for(int j=0;j<n;j++)
	{
	cin>>x>>y;
	a.push_back(x);
	a.push_back(y);
	ad[x].push_back(y);
	ad[y].push_back(x);
	}
	for(int j=0;j<=a.size();j++)
	{bfs(ad,a[j]);}

for(int j=1;j<10001;j++)
	{cout<<visit[j]<<" ";	
	if(visit[j] == 1)
	{c++;}
	}
cout<<c<<endl;
a.clear();
for(int j=0;j<10001;j++)
{visit[j]=0;
}
}

return 0;
}
