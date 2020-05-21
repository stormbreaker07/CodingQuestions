#include <bits/stdc++.h>
using namespace std;

long int n;


int main()
{
    cin >> n;
    vector<long int> v[n+1];
    int x,y;
    for (long int i = 1; i<n; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
long int level[n+1] = {0};


long int visit[n+1] = {0};
queue<long int> q;
q.push(1);
visit[1] = 1;
level[1]  = 0;
long int w;
while(!q.empty())
{
    w = q.front();
    q.pop();

    for(long int i=0;i<v[w].size();i++)
    {
        if(visit[v[w][i]]==0)
        {
            q.push(v[w][i]);
            visit[v[w][i]]=1;
            level[v[w][i]] = level[w]+1;
        }
    }
}

double ans=0,cont=0;

for(int i=1;i<=n;i++)
{
    if(v[i].size()==1)
    {cont++;
        ans += level[i];
    }
}

ans = ans/cont;
 cout<<fixed<<setprecision(6)<<ans;   
    
    
    
    return 0;
}
