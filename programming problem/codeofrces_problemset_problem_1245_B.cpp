#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float n;
        cin >> n;
        int a, b, c, x = 0, y = 0, z = 0;
        cin >> a >> b >> c;
        string w;
        cin >> w;
        string s;
        for (int j = 0; j < w.length(); j++)
        {
            if (w[j] == 'R')
            {
                if (b > 0)
                {
                    b--;
                    s = s + 'P';
                }
                else
                {
                    x++;
                    s = s + 'x';
                }
            }
            else if (w[j] == 'P')
            {
                if (c > 0)
                {
                    c--;
                    s = s + 'S';
                }
                else
                {
                    y++;
                    s = s + 'x';
                }
            }
            else if (w[j] == 'S')
            {
                if (a > 0)
                {
                    a--;
                    s = s + 'R';
                }
                else
                {
                    z++;
                    s = s + 'x';
                }
            }
        }
        int need = n - (x + y + z);
        if (need >= ceil(n / 2.0))
        {
            cout << "YES"<<endl;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'x')
                {
                    if (a > 0)
                    {
                        s[j] = 'R';
                        a--;
                    }
                    else if (b > 0)
                    {
                        s[j] = 'P';
                        b--;
                    }
                    else if (c > 0)
                    {
                        s[j] = 'S';
                        c--;
                    }
                }
            }
        
        cout<<s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}