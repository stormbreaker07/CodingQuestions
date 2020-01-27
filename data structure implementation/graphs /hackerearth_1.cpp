#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int w,k=0;
int level[100000+1];
	int visit[100000+1]= {0};
	

void bfs(vector<int> ad[],int s,int m)
{
q.push(s);
visit[s]=1;	
level[s]=1;
	while(!q.empty())
	{w=q.front();
		q.pop();
	for(int i=0;i<ad[w].size();i++)
	{if(visit[ad[w][i]] == 0)
		{level[ad[w][i]] = level[w]+1;
			if(level[ad[w][i]] == m)
			{k++;}
			q.push(ad[w][i]);	
			visit[ad[w][i]] = 1;
         }
	 }
     }
}



int main()
{int vertex,x,y;
	cin>>vertex;
	vector <int> ad[vertex+1];
	for(int i=1;i<vertex;i++)
	{cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	int m;
	cin>>m;
	 bfs(ad , 1,m);

	cout<<k; 
	
	 return 0;
 
 
 }
	 
	
	
	
	
		
		
