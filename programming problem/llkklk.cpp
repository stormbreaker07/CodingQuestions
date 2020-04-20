
// #include <bits/stdc++.h>
// using namespace std;

// #define l  long long int

// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         l n,x,sum=0,w;
//         cin>>n>>x;
//         vector<l> a;
//         l cont=0;
//         for(l j=0;j<n;j++)
//         {
//             cin>>w;
//             if(w>=x)
//             {
//                 cont++;
//                 sum += w-x;
//             }
//             else if(w<x)
//             {
//                 a.push_back(w);
//             }
//         }

//         sort(a.begin(),a.end(),greater<l>());
//         l dif =0;
//         for(l j=0;j<a.size();j++)
//         {
//             dif = x-a[j];
//             if(dif<=sum)
//             {
//                 cont++;
//                 sum -= dif;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         cout<<cont<<endl;

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l t;
    cin >> t;
    for (l i = 0; i < t; i++)
    {
         l cont = 0;
        l n, x, y, ind = 0, mx = 100000000000000;
        cin >> n;
        vector<l> a((2 * n) + 1, 0);
        vector<l> b((2 * n) + 1, 0);
        vector<l> store(n, 0);
        
        for (l j = 0; j < n; j++)
        {
            cin >> x >> y;
            b[j] = y;
            b[n + j] = y;
            a[j] = x;
            a[n + j] = x;
            if (x <= mx)
            {
                mx = x;
                ind = j;
            }
        }
    cont = a[0];
        for (l j = 1; j < n; j++)
        {
            if(a[j]>b[j-1])
            {
                cont+= a[j] - b[j - 1];
               
            }
        }
store[0]=cont;


for(l j=1;j<n;j++ )
{
    cont -= a[j-1];
    if(a[j]-b[j-1]<=0)
    {
        cont += a[j];
    }
    else if(a[j]-b[j-1]>0)
    {
        cont-=a[j]-b[j];
        cont+=a[j];
    }

    if(a[n+j-1]-b[n+j-2]>0)
    {
        cont+=a[n+j-1]-b[n+j-2];
    }
    
store[j]=cont;


}

for(l j=0;j<n;j++)
{
    cout<<store[j]<< " ";
}

sort(store.begin(),store.end());
cout<<store[0]<<endl;


        // cont += a[ind];

        // for (l j = ind + 1; j < n + ind; j++)
        // {
           
        //     if (a[j] <= b[j - 1])
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         a[j] = a[j] - b[j - 1];
        //         cont += a[j];
        //     }
        // }

    //     cout << cont << endl;
    // }
    }
    return 0;
}
