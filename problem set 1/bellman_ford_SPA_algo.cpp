#include <bits/stdc++.h>
using namespace std;

void bellmanford(vector<int> v[], int n, int m, int src)
{
    int dis[n];
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[src] = 0;
    for (int i = 0; i < v - 1; ++)
    {
        for (int j = 0; j < m; j++)
        {
            dis[v[j][0]]+v[j][2]<dis[v[j][1])
            {
                dis[v[j][1]] = dis[v[j][0]] + v[j][2];
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        int x = v[i][0]];
        int y = v[i][1]];
        int wei = v[i][2]];
        if(dis[i]!=INT_MAX && dis[x] + wei <dis[y])
        {cout<<"negative weight cycle "<<endl ;}
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v[m];
    int dis[m + 1];

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> wei;
        v[i].push_back(x);
        v[i].push_back(y);
        v[i].push_back(wei);
    }

    bellmanford(v, n, m, 0);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define l long long int

// int main()
// {
//     l t;
//     cin >> t;
//     for (l i = 0; i < t; i++)
//     {int flag=0;
//         l a, b, c;
//         cin >> a >> b >> c;
//         for ( ; ; )
//         { 
//              if(c<=0 && b<=0 || a<=0)
//             {   
//                 flag=1;
//                 break;
//             } 
            
//         if(ceil(a / 2) + 10<a )
//         {b--;
//         a=ceil(a / 2) + 10;}
//         else
//         {
//             a--;
//             a=a-10;
//         }
        
//         }

//         if(a<=0)
//         {cout<<"YES"<<endl;}
//         else
//         {cout<<"NO"<<endl;}
//     }

//     return 0;
// }