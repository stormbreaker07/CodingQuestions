#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int x;
    cin >> x;
    long int w, cont = 0, num = 0;
    int val;
    vector<int> v;
    vector<int> s;
    long int ans;

    for (int i = 1; i <= 40; i++)
    {
        cont = 0;
        v.clear();
        if (i % 2 != 0)
        {
            w = x;

            while (w > 0)
            {
                v.push_back(w & 1);
                w = w / 2;
            }
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == 0)
                {
                    cont++;
                }
            }

            if (cont == 0)
            {
                break;
            }

            for (int j = v.size() - 1; j >= 0; j--)
            {

                if (v[j] == 0)
                {
                    val = j + 1;
                    break;
                }
            }
            s.push_back(val);
            ans = pow(2, val);
            ans--;
            
            w = x ^ ans;
            x = w;

           ;
        }
        else
        {
            w = x;

            while (w > 0)
            {
                v.push_back(w & 1);
                w = w / 2;
            }
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] == 0)
                {
                    cont++;
                }
            }

            if (cont == 0)
            {
                break;
            }
            x = x + 1;
        }

        num++;
    }

    cout << num << endl;
        for (int j = 0; j < s.size(); j++)
        {
            cout << s[j] << " ";
        }

    return 0;
}