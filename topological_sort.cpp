#include <bits/stdc++.h>
using namespace std;

 vector<l> t;
 #define l long int
l visit[200001] = {0};


void dfs(vector<l> adj[],l n)
{// {cout<<n<<" ";
    if(visit[n]==0)
    {visit[n]=1;
        for(int i=0;i<adj[n].size();i++)
        {
            dfs(adj,adj[n][i]);
        }
          t.push_back(n);
    }
}




int main()
{
l n;
cin>>n;
vector<l> adj[n+1];

l m,q;
cin>>m>>q;
l x,y;
for(l i=0;i<m;i++)
{
    cin>>x>>y;
    adj[x].push_back(y);
}

for(l i=0;i<=n;i++)
{
 sort(adj[i].begin(),adj[i].end(),greater<int>());
}

for(l j=n;j>=1;j--)
{
    if(visit[j]==0)
    {dfs(adj,j);}
}

for(l j=t.size()-1;j>=0;j--)
{
    cout<<t[j]<<" ";
}
reverse(t.begin(),t.end());
l q;
for(l i=0;i<=t.size();i++)
{

if(t[i]==q)
{
w = i;
    break;
}

}
for(l i=0;i<n;i++)
{
    
}


    return 0;
}