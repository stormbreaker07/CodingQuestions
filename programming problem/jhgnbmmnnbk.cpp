// #include <bits/stdc++.h>
// using namespace std;

// #define l long long int

// int main()
// {

//     l t, n;
//     cin >> t;
//     for (l i = 0; i < t; i++)
//     {
//         cin >> n;
//         l a[n];
//         for (l j = 0; j < n; j++)
//         {
//             cin >> a[j];
//         }
//         sort(a, a + n, greater<int>());
//         l ans[n];
//         l in = 0;
//         if (n % 2 == 0)
//         {
//             for (l j = 0; j < n / 2; j++)
//             {
//                 ans[in] = a[j];
//                 ans[in + 1] = a[n - (j + 1)];
//                 in = in + 2;
//             }
//         }
//         else
//         {
//             l counter = 0;
//             for (l j = 0; j < n / 2; j++)
//             {
//                 ans[in] = a[j];
//                 ans[in + 1] = a[n - (j + 1)];
//                 in = in + 2;
//                 counter = j;
//             }
//             ans[in] = a[counter + 1];
//         }

//         for (l j = n - 1; j >= 0; j--)
//         {
//             cout << ans[j] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l t,n;
    cin>>t;
    for(l i=0;i<t;i++)
    {
        cin>>n;
        cout<<n<<endl;
    }

    return 0;
}