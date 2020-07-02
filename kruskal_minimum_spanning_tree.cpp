#include <bits/stdc++.h>
using namespace std;

#define l long long
const int MAX = 1e4 + 5;
int id[MAX], node, edge;
pair<l, pair<int, int> > p[MAX];

int root(int x)
{
    while (id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int a= root(x);
    int b = root(y);
    id[a] = id[b];
}

int kruskal(pair<l, pair<int, int> > p[])
{
    int x, y;
    l cost, miniCost = 0;
    for (int i = 0; i < edge; i++)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;

        if(root(x)!=root(y))
        {
            miniCost += cost;
            union1(x, y);
        }
    }
    return miniCost;
}

int main()
{
    l weight, cost, minicost;
    for (int i = 0; i < MAX; i++)
    {
        id[i] = i;
    }
    cin >> node >> edge;
    int x,y;
    for (int i = 0; i < edge; i++)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    sort(p, p + edge);
    minicost = kruskal(p);
    cout << minicost << endl;
    return 0;
}
