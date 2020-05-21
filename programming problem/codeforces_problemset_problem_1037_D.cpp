#include <bits/stdc++.h>
using namespace std;

int relorder[200007] = {0};


bool cmp(int a,int b){
	return relorder[a]<relorder[b];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v[n + 1];
    int gBFS[n+1];
    int a, b;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }


    	for(int i=0;i<n;i++){
		cin>>gBFS[i];
		relorder[gBFS[i]]=i;
	}	
	for(int i=1;i<=n;i++)
	{	sort(v[i].begin(),v[i].end(),cmp);
    }

    
    vector<int> nbfs;

    int vis[n + 1] = {0};
    int level[n + 1] = {0};
    queue<int> q;
    q.push(1);
    level[1] = 0;
    vis[1] = 1;
    while (!q.empty())
    {
        int p = q.front();
        nbfs.push_back(p);
        q.pop();
        for (int i = 0; i < v[p].size(); i++)
        {
            if (vis[v[p][i]] == 0)
            {

                level[v[p][i]] = level[p] + 1;
                q.push(v[p][i]);
                vis[v[p][i]] = 1;
            }
        }
    }


    int c = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (gBFS[i] == nbfs[i])
        {
            continue;
        }
        else
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}