#include <bits/stdc++.h>
using namespace std;

#define l long int

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
    cin >> n;
    l value[n+1];
    for (l i = 1; i <= n; i++)
    {
        cin >> value[i];
    }
    l arr[n + 1], mx[n + 1], mn[n + 1], size[n + 1];

    for (l i = 1; i <= n; i++)
    {
        arr[i] = i;
        size[i] = 1;
        mx[i] = value[i];
        mn[i] = value[i];
    }
cin>>m;
    l a, b, count_yes = 0, count_no = 0;
    l z;
    for (l j = 0; j < m; j++)
    {
        cin >> z;
        if (z == 1)
        {
            cin >> a >> b;
            l root_a = root(arr, a);
            l root_b = root(arr, b);
            if (size[root_a] < size[root_b])
            {
                arr[root_a] = arr[root_b];
                size[root_b] += size[root_a];
                mx[root_b] = max(mx[root_b],mx[root_a]);
                mn[root_b] = min(mn[root_b],mn[root_a]);
            }
            else
            {
                arr[root_b] = arr[root_a];
                size[root_a] += size[root_b];
                mx[root_a] = max(mx[root_b],mx[root_a]);
                mn[root_a] = min(mn[root_b],mn[root_a]);
            }
        }
        else if (z == 2)
        {
            cin >> a;
            l root_a = root(arr, a);
            cout << mx[arr[root_a]] - mn[arr[root_a]]<<endl;
        }
    }

    return 0;
}