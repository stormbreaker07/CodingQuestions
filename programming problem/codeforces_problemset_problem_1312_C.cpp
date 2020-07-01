#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        l n, k;
        cin >> n >> k;
        l a[n];
        l mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int visit[65] = {0};
        int cont = 0;
        while (mx > 0)
        {
            cont++;
            mx = mx / k;
        }

        int flag = 0;
        l x;
        for (int i = 0; i < n; i++)
        {
            for (int j = cont; j >= 0; j--)
            {
                if (pow(k, j) <= a[i])
                {x  = pow(k,j);
                    if (visit[j] == 0)
                    {cout<<x<<" ";
                        a[i] = a[i] - x;
                        visit[j] = 1;
                        cout<<a[i]<<endl;
                    }
                }
            }
            if (a[i] != 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}