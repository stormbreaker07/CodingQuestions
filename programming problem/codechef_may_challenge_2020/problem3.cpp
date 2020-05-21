#include <bits/stdc++.h>
using namespace std;

#define l long int

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        l n, k;
        cin >> n >> k;
        l x;
        l a[n + 1];
        queue<l> q;
        for (l j = 1; j <= n; j++)
        {
            cin >> a[j];
            if (a[j] != j)
            {
                q.push(j);
            }
        }

        l w, cont = 0;
        l x1, x2, x3, p0, p1, p2;
        vector<int> v;
        while (q.size() > 2)
        {
            if(cont>k)
            {break;}
            pair<l, l> p[3];
            w = q.front();
            q.pop();
            p[0] = make_pair(a[w], w);
            w = q.front();
            q.pop();
            p[1] = make_pair(a[w], w);
            w = q.front();
            q.pop();
            p[2] = make_pair(a[w], w);
            // sort(p, p + 3);
            x3 = p[0].second;
            x2 = p[2].second;
            x1 = p[1].second;

            p0 = p[0].first;
            p1 = p[1].first;
            p2 = p[2].first;

            p[0].first = p2;
            p[1].first = p0;
            p[2].first = p1;

            a[p[0].second] = p[0].first;
            a[p[1].second] = p[1].first;
            a[p[2].second] = p[2].first;

            if (p[0].first != p[0].second)
            {
                q.push(p[0].second);
            }

            if (p[1].first != p[1].second)
            {
                q.push(p[1].second);
            }

            if (p[2].first != p[2].second)
            {
                q.push(p[2].second);
            }
            cont++;
            v.push_back(x1);
            v.push_back(x2);
            v.push_back(x3);
        }

        if (cont > k || q.size() > 0)
        {
            cout << "-1"<<endl;
        }
        else
        {
            cout << cont << endl;
            for (int i = 0; i < v.size(); i = i + 3)
            {
                cout << v[i] << " " << v[i + 1] << " " << v[i + 2] << endl;
            }
        }
        v.clear();
    }
    return 0;
}