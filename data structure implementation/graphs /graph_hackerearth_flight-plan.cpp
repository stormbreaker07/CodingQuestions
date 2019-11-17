#include <bits/stdc++.h>
using namespace std;
queue<long int> q;
int level[1001];
int visit[1001]={0};
int tot = 0;
    
    void bfs(vector<int> ad[],int t,int c,int x,int y)
    {int w;
		q.push(x);
		visit[x]=1;
		level[x]=1;
		while(!q.empty())
		{w = q.front();
			q.pop();
			for(int i=0;i<ad[w].size();i++)
			{if(ad[w][i]>=w && ad[w][i]<y)
				{q.push(ad[w][i]);
				 level[ad[w][i]] = level[w]+1;
				 visit[ad[w][i]] = 1;}
			else if(ad[w][i]==y)
				{q.push(ad[w][i]);
					level[ad[w][i]] = level[w]+1;
				break;
				}
			}    
		}
	}


int main()
{int ver,edg,t,c,x,y,div;
	cin>>ver>>edg>>t>>c;
	vector<int> ad[ver+1];
	for(int i=0;i<edg;i++)
	{cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	cin>>x>>y;
	
	bfs(ad,t,c,x,y);
	
	int num  = level[y];
	for(int i=1;i<num;i++)
	{if(i == num-1)
		{tot+=c;
			break;
		}
		if(i<num-1)
		{tot+=c;
		div=tot/t;
		if(div%2!=0)
		{tot = t*(div+1);}
	    }
	}
	
	cout<<tot;
	return 0;
}
