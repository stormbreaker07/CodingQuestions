// #include <bits/stdc++.h>
// using namespace std;

// #define pb push_back
// #define l long int
// int main()
// {
//     l t;
//     cin >> t;
//     for (l i = 0; i < t; i++)
//     {
//         l n, x,w;
//         cin >> n >> x;
//         l a[10000] ={0} ;
//         for (l j = 0; j < n; j++)
//         {
//             cin >> w;
//             a[w] = 1;
//         }
//         // for(l j =0;j<100;j++)
//         // {cout<<a[j]<<" ";}
// l ans=0;
//         for(l j=1;j<10000;j++)
//         {
//             if(a[j]==0)
//             {
//                 if(x>0)
//                 {x--;
//                 ans = j;}
//                 else
//                 {
//                     ans = j-1;
//                     break;
//                 }
//             }
//         }
// cout<<ans<<endl;

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define l long int
int main()
{

    l t, n;
    cin >> t;
    for (l i = 0; i < n; l++)
    {
        cin >> n;
        l a[n], w[n + 1] = {0};
        for (l j = 0; j < n; j++)
        {
            cin >> a[j];
            w[a[j]] += 1;
        }
        l flag = 0, c = 0, ind = 0;
        for (l j = 1; j <= n; j++)
        {
            if (w[j] == 2 && flag == 0)
            {
                ind = j;
            }
            if (w[j] == 1)
            {
                flag = 1;
            }

            if (w[j] == 2 && flag == 1)
            {
                c = 1;
                break;
            }
        }
        l ind2 =0;
        for (l j = n; j >= 1; j--)
        {
            if (w[j] == 1)
            {
                ind2 = j;
                break;
            }
        }

        l ans;
        if (c == 1 || ind == 0)
        {
            ans = 0;
        }
        else if (c == 0 && ind > 0)
        {
            l L1[ind + 1] = {0};
            for (j = 0; j < ind; j++)
            {
                L1[a[j]] = 1;
            }
            l len1 = 0;
            for (l j = 1; j <= ind; j++)
            {
                if (L1[j] != 1)
                {
                    len1 = -1;
                }
            }

            if (len1 == -1)
            {
                L1 = {0};
                for (l j = n - 1; j >= ((n - 1) + ind); j--)
                {
                    L1[a[j]] = 1;
                }
                len1 = 0;
                for (l j = 1; j <= ind; j++)
                {
                    if (L1[j] != 1)
                    {
                        len1 = -1;
                    }
                }
                if(len1==0)
                {len1 = 3;}
            }
            else
            {
                len1 = 2;
            }

            if (len1 != -1)
            {
                l con = 0;
                
                if(len1==2)
                {
                for (l j = ind + 1; j <= n; j++)
                {con=1;
                    if (j == a[j-1] && j== ind2)
                    {con++;
                    break;}
                }
                cout<<con<<endl;
                if()    
                }
            }
            else
            {
                ans = 0;
            }
            
        }

        return 0;
    }