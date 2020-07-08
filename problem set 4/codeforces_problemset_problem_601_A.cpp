#include <bits/stdc++.h>
using namespace std;

int n, mx;
int level[410] = {0};

   void bfs(vector<int> v[],int vis[],int s) {
        queue <int> q;
        q.push(s);
        level[ s ] = 0 ;  //Setting the level of the source node as 0
        vis[ s ] = true;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            
                    level[ v[ p ][ i ] ] = level[ p ]+1;                 
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
      }
            }
        }
    }

// void bfs(vector<int> v[], int visit[], int st)
// {
//      if(st == n)
//         {    mx = min(mx,level[st]);
//         }

//     if (visit[st] == 0)
//     {
//         visit[st] = 1;
        
//         for (int i = 0; i < v[st].size(); i++)
//         { level[v[st][i]] = level[st]+1;
//         cout<<st<< " "<<v[st][i]<< " " <<level[v[st][i]]<<endl;
//             bfs(v, visit, v[st][i]);
//         }
//     }
// }

int main()
{
    int m;
    cin >> n >> m;
    int a[n + 1][n + 1];
    vector<int> rail[n + 1];
    vector<int> road[n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        rail[x].push_back(y);
        rail[y].push_back(x);
        a[x][y] = 1;
        a[y][x] = 1;
    }

    // for (int i = 1; i <=n; i++)
    // {
    //     sort(rail[i].begin(),rail[i].end(),greater<int>());
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 0 && i != j)
            {
                road[i].push_back(j);
            }
        }
    }


    // for (int i = 1; i <=n; i++)
    // {
    //     sort(road[i].begin(),road[i].end(),greater<int>());
    // }

    int visit[n + 1] = {0};
    level[1] = 0;
    mx = 10000;
    bfs(rail, visit, 1);
    
    int mn1 = level[n];
    mx = 10000;
    
    for(int i=1;i<=n;i++)
    {level[i] = 0;}

    
    int visit1[n + 1] = {0};
    bfs(road, visit1, 1);
    
    int mn2 = level[n];

    if(mn1==0 || mn2 == 0)
    {cout<<-1;}
    else
    {cout<<max(mn1,mn2)<<endl;}
    
    return 0;
}