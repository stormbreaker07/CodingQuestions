#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll w,cont=0,j,sum=0;
    ll counter = 0,mn,mx; 
    for(ll i=3;i<pow(2,n);i++)
    {w = i;
    cont=0,j=0,sum=0;
    mn = 10000000;
    mx = 0;
        while(w>0)
        {
            if(w&1==1)
            {
                cont++;
                sum = sum + a[j];
                mn = min(mn,a[j]);
                mx = max(mx,a[j]);
            }
            j++;
            w = w/2;
        
        }
        if(cont>=2)
        {
            if(sum>=l && sum<=r && mx-mn>=x)
            {
                counter++;
            }
        }
    }
    cout<<counter;

    return 0;
}

// /*repeat k times*/
// #include <bits/stdc++.h>
// using namespace std;

// #define l long long int

// int main()
// {
//     l n;
//     cin >> n;
//     vector<l> v(100002, 0);
//     l x;
//     for (l i = 0; i < n; i++)
//     {
//         cin >> x;
//         v[x]++;
//     }
//     l k;
//     cin >> k;
//     for (int i = 0; i < 100002; i++)
//     {
//         if (v[i] == k)
//         {
//             cout << i;
//             break;
//         }
//     }

// return 0;
// }

// /*numerology and ruby*/

// #include <bits/stdc++.h>
// using namespace std;

// #define l long long int
// l ans = 1, w;
// l n, k;

// l fun(l x, l ln)
// {
//     l an = x;
//     if (ln >= n)
//     {
//         return an;
//     }
  
//         if (x == 1)
//         {
//             an = an *fun(k - 1, ln + 1);
//         }
//         else if (x == k - 1)
//         {
//             an = an * (fun(k - 1, ln + 1) + fun(1, ln + 1));
//         }

  
//     return an;
// }

// int main()
// {

//     cin >> n >> k;
//     ans = k - 1;
//     l x=0;
//     if(k==1)
//     {
//         ans = 0;
//     }
//     else if(k==2)
//     {
//         l a,b;
//         a = 1;
//         b = 2;
//         if(n==1)
//         {x = a;}
//         if(n==2)
//         {x = b;}
//         if(n>2)
//         {for(int i=3;i<=n;i++)
//         {
//             x = a+b;
//             a = b;
//             b = x;
//         }
//         }
//     ans = x;
//     }
//     else if (k > 2)
//     {
//         ans = fun(k - 1, 1);
//     }
//     cout<<ans;
    
//     return 0;
// }