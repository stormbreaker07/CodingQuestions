#include<bits/stdc++.h>
using namespace std;

int root(int a,int r[])
{
    while(r[a]!=a)
    {
        r[a] = r[r[a]];
        a =r[a];
    }
    return a;
}


int main()
{
    int n;
    cin>>n;
    int q[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>q[i];
    }
    int x;
    cin>>x;
   pair <int,pair<int,int> > v[x];
    
    int a,b,wei;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b>>wei;
        v[i]  = make_pair(wei,make_pair(a,b));

    }
    sort(v, v + x);

    int vis[n+1] = {0};
    
    int r[n+1];
    
    for(int i=1;i<=n;i++)
    {r[i] = i;}

long int sum =0;

    for(int i=0;i<x;i++)
    {
        int x= v[i].second.first;
        int y = v[i].second.second;
        wei = v[i].first;

        if((vis[y]==0)  && (q[x]>q[y]))        
        {
            int w1 = root(x,r);
            int w2 = root(y,r);
            r[y] = r[x];
            sum += wei;
            vis[y] = 1;
        }


    }
    int wq = root(1,r);
    int cont=0;
    for(int i=2;i<=n;i++)
    {
        
        if(root(i,r)!=wq)
        {cont=1;}
    }
    if(cont==0)
    {cout<<sum;}
    else
    {
        cout<<"-1";
    }
    

    return 0;
}