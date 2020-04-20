#include <bits/stdc++.h>

using namespace std;

#define l long int
int main()
{
    int t;
    cin >> t;
    int n, m;
    l w;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        w = n * m;
        if (w % 2 != 0)
        {
            for (l j = 1; j <= w; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
                if (j%m == 0)
                {
                    cout << endl;
                }
            }
        }
        else if (w % 2 == 0)
        {
            for (int j = 1; j <= w - m; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
                if (j%m == 0)
                {
                    cout << endl;
                }
            }
            cout<<"B";
            for(int j=1;j<=m-1;j++)
            {
                if (j % 2 != 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
            }
        }

        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// #define l long long int
// int main()
// {
//     int t,w;
//     cin >> t;
//     l n;
//     for (int i = 0; i < t; i++)
//     {
//         int c = 0;
//         cin >> n;
//         l a[n], b[n];
//         for (int j = 0; j<n; j++)
//         {
//             cin >> a[j];
//         }

//         for (int j = 0; j<n; j++)
//         {
//             cin >> b[j];
//         }

//         int p[3] ={0};
//         for (l j = 0; j < n; j++)
//         {
            
//             if (a[j] > b[j])
//             {
//                 if (p[2] == 1)
//                 {
                    
//                     w=1;
//                 }
//                 else
//                 {
//                     c = 1;
//                     break;
//                 }
//             }
//             else if (a[j] < b[j])
//             {
//                 if (p[1] == 1)
//                 {
//                     w=1;
//                 }
//                 else
//                 {
//                     c = 1;
//                     break;
//                 }
//             }


//             if (a[j] == 0)
//             {
//                 p[0] = 1;
             
//             }
//             else if (a[j] == 1)
//             {
//                 p[1] = 1;
               
//             }
//             else if (a[j] == -1)
//             {
//                 p[2] = 1;
               
//             }

//         }
//         if(c==0)
//         {cout<<"YES"<<endl;}
//         else if(c==1)
//         {cout<<"NO"<<endl;}
//     }

//     return 0;
// }