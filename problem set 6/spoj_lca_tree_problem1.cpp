        #include <bits/stdc++.h>
        using namespace std;
         
        #define l long int
         
         
        void dfs(l u, l p, l **mem, l *level, l log, vector<l> g[])
        {
            mem[u][0] = p;
            for (l i = 1; i <= log; i++)
            {
                mem[u][i] = mem[mem[u][i - 1]][i - 1];
            }
            for (l v : g[u])
            {
                if (v != p)
                {
         
                    level[v] = level[u] + 1;
                    dfs(v, u, mem, level, log, g);
                }
            }
        }
         
        l lca(l u, l v, l log, l *level, l **mem)
        {
            if (level[u] < level[v])
            {
                swap(u, v);
            }
         
            for (l i = log; i >= 0; i--)
            {
                if (level[u] - pow(2, i) >= level[v])
                {
                    u = mem[u][i];
                }
            }
            if (u == v)
            {
                return u;
            }
         
            for (l i = log; i >= 0; i--)
            {
                if (mem[u][i] != mem[v][i])
                {
                    u = mem[u][i];
                    v = mem[v][i];
                }
            }
         
            return mem[u][0];
        }
         
        int main()
        {
         
            int t;
            cin >> t;
            for (int i = 1; i <= t; i++)
            {
                l n;
                cin >> n;
                vector<l> g[n + 1];
                l x, y,z;
                
                for (l j = 1; j <= n; j++)
                {
                    cin>>z;
                    for(int k=0;k<z;k++)
                    {
                   cin>>y;
                     g[j].push_back(y);
                    }
                }
         
                l log = (int)ceil(log2(n));
                l **mem = new l *[n + 1];
                for (int j = 0; j < n + 1; j++)
                {
                    mem[j] = new l[log + 1];
                }
         
                l *level = new l[n + 1];
         
                for (l j = 0; j < n; j++)
                {
                    memset(mem[j], -1, sizeof mem[j]);
                }
         
                dfs(1, 1, mem, level, log, g);
                l query;
                cin >> query;
                cout<<"Case "<< i << ":"<<endl;
                for (int j = 0; j < query; j++)
                {
                    cin >> x >> y;
                    l cont = lca(x, y, log, level, mem);
                    cout << cont << endl;
                }
            }
         
            return 0;
        }
          