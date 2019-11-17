#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int w;

void BFS(vector<int> ad[],int v)
{
int a[1000]= {0};
q.push(ad[0][0]);	
while(!q.empty())
{
	w=q.front();
	if(a[w]!=1)
	{cout<<w<<" ";}
    a[w]=1;
  q.pop();
 for(int i=0;i<ad[w].size();i++) 		
	{if(a[ad[w][i]]!=1)
		{q.push(ad[w][i]);}		
	}
}	
}


int main()
{int ver,x,y;
cin>>ver;
vector<int> ad[ver];
int edges;
cin>>edges;
for(int i=0;i<edges;i++)
{cin>>x>>y;
	ad[x].push_back(y);
	ad[y].push_back(x);
}
BFS(ad,ver);


	
return 0;
}

