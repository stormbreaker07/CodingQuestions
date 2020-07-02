#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    vector<int> v[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
    }
    int visit[n + 1] = {0};
int rcont=0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() > 0)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                rcont=;
                visit[v[i][j]]++;
            }
        }
    }
    int round=0;
    if(rcont==1)
    {
        for(int i=1;i<=n;i++)
        {
            if(visit[i]!=1)
            {
                round=1;
                break;
            }
            
        }
    }
    if(round==0)
    {cout<<"round";}



    return 0;
}