#include<bits/stdc++.h>
using namespace std;

int level[n+1]={0};

void dfs(vector<int> v[],int st)
{
    for(auto r : v[st])
    {
        level[r] = level[r]+1;
        dfs(v,r);
    }
}



int main()
{
int n;
cin>>n;
vector<int> to_store;
vector<int> v[n+1];
int a[n+1]={0};
for(int i=1;i<=n;i++)
{
    cin>>x;

    if(x==-1)
    {
        to_store.push_back(i);
    }
    else
    {
        v[x].push_back(i);
    }
}
int mx=0;
for(int i=0;i<to_store.size();i++)
{
    level[n+1]={0};

    dfs(v,a[i]);
    sort(level,level+n+1,greater<int>());
    if(mx<a[0]);
    {mx = a[0];}
}

    return 0;
}