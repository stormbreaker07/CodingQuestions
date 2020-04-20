#include <bits/stdc++.h>
using namespace std;

vector<int> les;
priority_queue<int, vector<int>, greater<int> > q;

void dfs(vector<int> v[], int visit[], int x)
{
    int w,a;

    visit[x] = 1;

    q.push(x);

    while (!q.empty())
    {
        w = q.top();
        q.pop();
        les.push_back(w);
        for (int i=0;i<v[w].size();i++)
        {a = v[w][i];
            if(visit[a] == 0)
            {visit[a]=1;
                q.push(a);
            }
        }
    }
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    vector<int> v[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    int visit[n + 1] = {0};

    dfs(v, visit, 1);

    for (int i = 0; i < les.size(); i++)
    {
        cout << les[i] << " ";
    }

    return 0;
}