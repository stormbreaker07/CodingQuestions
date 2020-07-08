#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l x, lim, m = 0;
    cin >> x >> lim;
    l cont = 0;
    vector<l> v;
    for (l i = lim; i >= 1; i--)
    {
        m = i;
        l low, j = 0;
        while (m > 0)
        {
            if (m & 1 == 1)
            {
                low = pow(2, j);
                break;
            }
            j++;
            m = m / 2;
        }
        if (x >= low)
        {
            cont++;
            x = x - low;
            v.push_back(i);
        }
    }
    if (x == 0)
    {
        cout << cont << endl;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}
