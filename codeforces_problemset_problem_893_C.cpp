#include <bits/stdc++.h>
using namespace std;

#define l long long int
#define MAX 1000000

l root(l arr[], l x)
{
    while (arr[x] != x)
    {
        arr[x] = arr[arr[x]];
        x = arr[x];
    }
    return x;
}

int main()
{
    l n, m;
    cin >> n >> m;
    l bribe[n + 1], arr[n + 1],size[n+1];
    l cost[n+1]={0};
    for (l i = 1; i <= n; i++)
    {
        cin >> bribe[i];
        arr[i] = i;
        size[i]=1;
    }
    l x, y;

    for (l j = 0; j < m; j++)
    {
        cin >> x >> y;
        l root_x = root(arr,x);
        l root_y = root(arr,y);
        if (arr[root_x] != arr[root_y])
        {
            if(size[root_y]<=size[root_x])
            {
                arr[root_y] = arr[root_x];
                size[root_x] += size[root_y];
                cost[arr[root_x]] = min(bribe[root_x],bribe[root_y]);
            }
            else
            {
                arr[root_x] = arr[root_y];
                size[root_y] += size[root_x];
                 cost[arr[root_y]] = min(bribe[root_x],bribe[root_y]);
            }
            
        }
    }
    l cont=0;
    l nwcost[n+1]={0};
    for(l j=1;j<=n;j++)
    {l root_x  = root(arr,j);
        if(bribe[arr[root_x]]>=bribe[j])
        {bribe[arr[root_x]] = bribe[j];
            nwcost[arr[root_x]] = bribe[j];
        }
    }
    for(l j=1;j<=n;j++)
    {cont+= nwcost[j];}
    cout<<cont<<endl;

    return 0;
}