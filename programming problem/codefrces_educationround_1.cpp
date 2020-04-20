// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         cin>>n;
//         int p[n],c[n];
//         for(int j=0;j<n;j++)
//         {
//             cin>>p[j]>>c[j];
//         }
//     int flag=0,c1=0;
//         for(int j=0;j<n;j++)
//         {
//             if(p[j]<c[j])
//             {
//                 flag=1;
//                 break;
//             }
//             else if(p[j]>=c[j])
//             {
//                 if(j>=1)
//                 {
//                     if(p[j]<p[j-1])
//                     {
//                         flag=1;
//                         break;
//                     }
//                     else if(p[j]>p[j-1])
//                     {
//                         if(c[j]==c[j-1])
//                         {c1=1;}
//                         else if(c[j]>c[j-1])
//                         {
//                             if((c[j]-c[j-1])<=(p[j]-p[j-1]))
//                             {
//                                 c1=1;
//                             }
//                             else
//                             {
//                                 flag=1;
//                                 break;
//                             }
//                         }
//                         else
//                         {
//                             flag=1;
//                             break;
//                         }

//                     }
//                     else if(p[j]==p[j-1])
//                     {
//                         if(c[j]==c[j-1])
//                         {c1=1;}
//                         else
//                         {
//                             flag=1;
//                             break;
//                         }
//                     }
//                 }
//             }

//         }
//         if(flag==0)
//         {cout<<"YES"<<endl;}
//         else if(flag==1)
//         {cout<<"NO"<<endl;}
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    int t;
    cin >> t;
    l n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        l a[n], b[n];
        for (l j = 0; j < n; j++)
        {
            cin >> a[j] >> b[j];
        }
        l store = 0, value = 0, ind = 0, mn = 1e18;

        for (l j = 0; j < n; j++)
        {
            ind = (j + 1) % n;
            value = min(a[ind], b[j]);
            store += a[ind] - value;
            mn = min(mn, value);
        }
        store += mn;
        cout<<store<<endl;
    }

    return 0;
}