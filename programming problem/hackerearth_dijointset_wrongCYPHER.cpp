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
    l t;
    cin >> t;
    for (l k = 0; k < t; k++)
    {
        l n, m;
        cin >> n >> m;
        l arr[n + 1], size[n + 1];

        for (l i = 1; i <= n; i++)
        {
            arr[i] = i;
            size[i] = 1;
        }

        l a, b,count_yes=0,count_no=0;
        char z;
        for (l j = 0; j < m; j++)
        {
            cin >> z >> a >> b;
            if (z == 'J')
            {
                l root_a = root(arr, a);
                l root_b = root(arr, b);
                if (size[root_a] < size[root_b])
                {
                    arr[root_a] = arr[root_b];
                    size[root_b] += size[root_a];
                }
                else
                {
                    arr[root_b] = arr[root_a];
                    size[root_a] += size[root_b];
                }
            }
            else
            {
                l root_a = root(arr, a);
                l root_b = root(arr, b);
                if (arr[root_a] == arr[root_b])
                {
                    count_yes++;
                }
                else
                {
                    count_no++;
                }
            }
        }
        cout<< count_yes << " " << count_no << endl;
    }

    return 0;
}