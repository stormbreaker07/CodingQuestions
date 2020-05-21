#include<bits/stdc++.h>
using namespace std;

#define l int
int n;

void bfs(vector<int> v[] , int level[], l s)
{
    int flag = 0;
    int vis[n + 1] = {0};
    queue<l> q;
    q.push(s);
    level[s] = 0;
    vis[s] = 1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 0; i < v[p].size(); i++)
        {
            if (vis[v[p][i]] == 0)
            {
                level[v[p][i]] = level[p] + 1;
                q.push(v[p][i]);
                vis[v[p][i]] = 1;
            }
        }
    }
}

int main()
{
    int m,s,t;
    cin>>n>>m>>s>>t;
    int x,y;

    int graph[n+1][n+1];
    vector<int> v[n+1];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {graph[i][j] = 0;}
            else
            {
                graph[i][j] = 1;
            }
            
        }
    }

    
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        graph[x][y] = 1;
        graph[y][x] = 1;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    int d1[n+1]={0};
    int d2[n+1]={0};
    bfs(v,d1,s);
    bfs(v,d2,t);

    
    int mndis = abs(d1[t]);


int cont=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        if( ((d1[i]+d2[j]+1)>=mndis) && ((d2[i]+d1[j]+1)>=mndis) && (graph[i][j]!=1) )
        {
            cont++;
        }
    }


    cout<<cont/2;



    return 0;
}