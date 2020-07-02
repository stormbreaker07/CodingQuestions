#include <bits/stdc++.h>
using namespace std;

const long int MAX = 1e5 + 5;
int node, edge;


int root(int id[],int x)
{
    while (id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int id[], int x, int y)
{
    int a = root(id,x);
    int b = root(id,y);
    id[a] = id[b];
}

int kruskal(int id[],pair<int, pair<int, int> > p[])
{
    int x, y;
    int cost, miniCost = 0;
    for (int i = 0; i < edge; i++)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        if (root(id,x) != root(id,y))
        {
            miniCost += cost;
            union1(id,x, y);
        }
    }
    return miniCost;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> node >> edge;

        pair<int, pair<int, int> > p[edge];
        int id[node + 1];
        for (int j = 1; j <= node; j++)
        {
            id[j] = j;
        }
        int x, y, wei = 1;
        for (int j = 0; j < edge; j++)
        {
            cin >> x >> y;
            p[j] = make_pair(wei, make_pair(x, y));
        }
        sort(p, p + node);

        int minicost = kruskal(id,p);
        cout<<minicost<<endl;
    }

    return 0;
}