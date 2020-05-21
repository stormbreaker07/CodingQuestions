#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long int n = s.length();
    int tl;
    char c;
    for (long int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            if (i < n - 2)
            {
                c = s[i + 2];

                if (c == 'z')
                {
                    tl = int(c) - 1;
                    if (char(tl) == s[i + 1])
                    {
                        tl = tl - 1;
                        s[i + 1] = char(tl);
                    }
                    else
                    {
                        s[i + 1] = char(tl);
                    }
                }
                else
                {
                    tl = int(c) + 1;
                    if (char(tl) == s[i + 1])
                    {
                        tl = tl + 1;
                        s[i + 1] = char(tl);
                    }
                    else
                    {
                        s[i + 1] = char(tl);
                    }
                }
            }
            else
            {
                c = s[i];
                if (s[i] == 'z')
                {
                    tl = int(c) - 1;
                    s[i + 1] = char(tl);
                }
                else
                {
                    tl = int(c) + 1;
                    s[i + 1] = char(tl);
                }
            }
        }
    }

    cout << s;

    return 0;
}