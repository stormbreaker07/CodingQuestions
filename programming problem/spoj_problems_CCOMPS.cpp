#include <bits/stdc++.h>
using namespace std;

int n, m;
int vis[100002] = {0};

void dfs(vector<int> v[], int s)
{

    vis[s] = 1;
    for (int i = 0; i < v[s].size(); i++)
    {
        if (vis[v[s][i]] == 0)
        {
            dfs(v, v[s][i]);
        }
    }
}

int main()

{
    int x, y;
    cin >> n >> m;
    vector<int> v[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int cont = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            cont++;
            dfs(v, i);
        }
    }

    cout<<cont;
    return 0;
}