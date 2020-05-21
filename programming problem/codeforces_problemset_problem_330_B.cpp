#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> vec[], int ind, int comp)
{
    vector<int>::iterator it;
    it = find(vec[ind].begin(), vec[ind].end(), comp);
    if (it != vec[ind].end())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x, y,cont=0;
    vector<int> a[n + 1];
    int vis[n + 1] = {0};
    int w=0;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        vis[x]=1;
        vis[y]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            w=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i!=w)
        {cout<<w<<" "<<i<<endl;}
    }

    return 0;
}