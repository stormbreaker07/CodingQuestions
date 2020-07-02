#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s = s + ',';
    int x[130] = {0};
    char a;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        x[int(a)] = 1;
    }

    long int cont = 0;
    vector<long long int> v;
    for (int i = 0; i < n+1; i++)
    {
        if (x[int(s[i])] == 0)
        {
            v.push_back(cont);
            cont = 0;
        }
        else if (x[int(s[i])] == 1)
        {
            cont++;
        }
    }


    long long int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += (v[i] * (v[i] + 1)) / 2;
    }
    cout << ans;

    return 0;
}