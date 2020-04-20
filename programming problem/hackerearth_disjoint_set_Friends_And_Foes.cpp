#include <bits/stdc++.h>
using namespace std;

int root(int arr[], int x)
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
    int n;
    cin >> n;
    int arr[n + 1], size[n + 1], goku[n + 1];
    int vis[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
        size[i] = 1;
        goku[i] = 0;
    }
    int m1;
    cin >> m1;
    int x, y;
    for (int i = 0; i < m1; i++)
    {
        cin >> x >> y;
        int root_x = root(arr, x);
        int root_y = root(arr, y);
        if (arr[root_x] != arr[root_y])
        {
            if (size[root_y] <= size[root_x])
            {
                arr[root_y] = arr[root_x];
                size[root_x] += size[root_y];
            }
            else
            {
                arr[root_x] = arr[root_y];
                size[root_y] += size[root_x];
            }
        }
    }
    int m2;
    cin >> m2;
    for (int i = 0; i < m2; i++)
    {
        cin >> x >> y;
        int root_x = root(arr, x);
        int root_y = root(arr, y);
        if (root_x == root_y)
        {
            goku[root_x] = -1;
        }
    }
long int sum=0;
    for(int i=1;i<=n;i++)
    {
        int root_x = root(arr,i);
        if(goku[root_x]!=-1 && vis[root_x]==0)
        {
            sum+=size[root_x];
            vis[root_x]=1;
        }
    }

    cout<<sum;

    return 0;
}