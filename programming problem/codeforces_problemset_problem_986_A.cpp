#include <bits/stdc++.h>
using namespace std;

#define l long long int
l mx, n, w;

void bfs(vector<l> v[], l value[], l s)
{
    vector<l> ned;
    vector<l>::iterator it;
    int flag = 0;
    l level[n + 1] = {0};
    int vis[n + 1] = {0};
    queue<l> q;
    q.push(s);
    level[s] = 0;
    ned.push_back(value[s]);
    mx = level[s];
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
                if (ned.size() < w && flag == 0)
                {
                    it = find(ned.begin(), ned.end(), value[v[p][i]]);
                    if (it == ned.end())
                    {
                        ned.push_back(value[v[p][i]]);
                        mx += level[v[p][i]];
                    }
                }
                else if (ned.size() == w && flag == 0)
                {
                    flag = 1;
                    break;
                }

                q.push(v[p][i]);
                vis[v[p][i]] = 1;
            }
        }
        if(flag==1)
        {break;}
    }
}

int main()
{
    l m, k;
    cin >> n >> m >> k >> w;
    vector<l> ad[n + 1];
    l value[n + 1];
    for (l i = 1; i <= n; i++)
    {
        cin >> value[i];
    }
    l x, y;
    for (l i = 1; i <= m; i++)
    {
        cin >> x >> y;
        ad[x].push_back(y);
        ad[y].push_back(x);
    }

    for (l i = 1; i <= n; i++)
    {
        mx = 0;
        bfs(ad, value, i);
        cout << mx << " ";
    }

    return 0;
}