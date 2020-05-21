#include <bits/stdc++.h>
using namespace std;

#define SIZ 100000 + 1
int vis[SIZ];
long int dist[SIZ];

void dijkstra(vector<pair<int, int> > v[], int str)
{
    
    memset(vis, false, sizeof vis);
    dist[str] = 0;
    multiset< pair<int, int> > s;

    s.insert(make_pair(0, str));

    while (!s.empty())
    {
        pair<int, int> p = *s.begin();
        s.erase(s.begin());
        int x = p.second;
        int wei = p.first;
        if (vis[x])
           { continue;}
cout<<x<<" "<<wei<<endl;
        vis[x] = true;

        for (int i = 0; i < v[x].size(); i++)
        {
            int e = v[x][i].first;
            int w = v[x][i].second;
            if (dist[x] + w < dist[e])
            {
                dist[e] = w + dist[x];
                cout<<e<<" "<<dist[e]<<endl;
                s.insert(make_pair(dist[e] , e));
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > v[n + 1];
    int x, y, w;
    for(int i=1;i<=n;i++)
    {dist[i] = 100000000;}
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        v[x].push_back(make_pair(y, w));
    }

    int sour;
    // cin >> sour;
    sour =1;
    dijkstra(v, sour);

for(int i=2;i<=n;i++)
{
    cout<<dist[i]<<" ";
}

    return 0;
}