#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,elem;
    cin >> t;
    for (int i = 0; i < t; i++)
    {int x;
        cin >> n;
        int visit[n + 1] = {0};
        vector<int> v[n + 1];
        int w = 0, queen;
        for (int j = 1; j <= n; j++)
        {
            cin >> elem;
            int flag = 0;
            for (int k = 0; k < elem; k++)
            {
                cin >> x;
                if (visit[x] == 0 && flag == 0)
                {
                    visit[x] = 1;
                    flag = 1;
                }
                // if(visit[x]==0)
                // {v[j].push_back(x);}
            }
            if (flag == 0)
            {
                queen = j;
                w = 1;
            }
        }
        if (w == 0)
        {
            cout << "OPTIMAL" << endl;
        }
        else
        {
            for (int k = 1; k < n + 1; k++)
            {
                if (visit[k] == 0)
                {
                    w = 2;
                    cout << "IMPROVE" << endl;
                    cout << queen << " " << k<<endl;
                    break;
                }
            }
            if (w != 2)
            {
                cout << "OPTIMAL" << endl;
            }
        }
    }

    return 0;
}