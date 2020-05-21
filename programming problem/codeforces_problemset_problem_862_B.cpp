#include <bits/stdc++.h>
using namespace std;

#define nt long long int 

int main()
{
    nt n;
    cin >> n;
    vector<nt> v[n + 1];
    nt x, y;

    for (nt i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    nt vis[n + 1] = {0};
    nt level[n + 1] = {0};
    queue<nt> q;
    q.push(1);
    level[1] = 1;
    vis[1] = 1;
    while (!q.empty())
    {
        nt p = q.front();
        q.pop();
        for (nt i = 0; i < v[p].size(); i++)
        {
            if (vis[v[p][i]] == 0)
            {

                level[v[p][i]] = level[p] + 1;
                q.push(v[p][i]);
                vis[v[p][i]] = 1;
            }
        }
    }

    nt level1[n + 1] = {0};
    nt cont1=0,cont2=0;
    for (int i = 1; i <= n; i++)
    {
        if(level[i]%2!=0)
        {cont1++;}
        else
        {
            cont2++;
        }
        
    }
    cont1 = cont1*cont2;
    
    cont1 = cont1-(n-1);

    cout << cont1;

    return 0;
}