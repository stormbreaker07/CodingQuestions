#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<int> v[n + 1];
    int ind[n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        ind[a]++;
        ind[b]++;
    }
    int counter = 0, cont = 0;
    vector<int> c;
    for ( ; ; )
    {
        counter = 0;
        for (int j = 1; j <= n; j++)
        {
            if (ind[j] == 1)
            {
                c.push_back(j);
                ind[j]--;
                
            }
        }
        if (c.size() > 0)
        {cont++;
            for (auto counte : c)
            {
                for (int j = 0; j < v[counte].size(); j++)
                {
                    ind[v[counte][j]]--;
                }
            }
        }
        else if (c.size() == 0)
        {
            break;
        }
        c.clear();
    }

    cout << cont;

    return 0;
}