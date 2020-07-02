// #include<bits/stdc++.h>
// using namespace std;

// #define l long long int

// int main()
// {
//     l n,k;
//     cin>>n>>k;
//     vector<l> a;
//     int j=0;
//     while(n>0)
//     {
//         if(n&1==1)
//         {
//             a.push_back(pow(2,j));
//             k--;
//         }
//         j++;
//         n = n/2;
//     }
//     if(k==0)
//     {cout<<"YES"<<endl;
//         for(int i=0;i<a.size();i++)
//         {cout<<a[i]<<" ";}
//     }
//     else if(k<0)
//     {cout<<"NO"<<endl;}
//     else if(k>0)
//     { l reman,w;
//         vector<int> v;
//         for(int i=0;i<a.size();i++)
//         {
//             if(k+1>=a[i])
//             {
//                 for(int i=1;i<=a[i];i++)
//                 {v.push_back(1);}
//                 k = k - a[i] + 1;
//             }
//             else if(k+1<a[i])
//             {
//                 k = k+1;
//                 w = a[i]/k;
//                 reman = a[i] - (w*k);
//                 for(int i=1;i<=k-1;i++)
//                 {v.push_back(w);}
//                 v.push_back(w+reman);
//                 k=0;
//             }
//         }
//         if(k==0)
//         {sort(v.begin(),v.end());
//             cout<<"YES"<<endl;
//             for(l i=0;i<v.size();i++)
//             {
//                 cout<<v[i]<<" ";
//             }
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }

//         }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l n, k;
    cin >> n >> k;
    vector<l> a;
l n1  = n;
    int j = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            a.push_back(j);
        }
        j++;
        n /= 2;
    }
    if (k < a.size())
    {
        cout << "NO";
    }
    else if (k > n1)
    {
        cout << "NO";
    }
    else
    {
        int flag = 0;
        for ( ; ; ) 
        {
            for (int i = 0; i < a.size(); i++)
            {
                 if (a.size() == k)
                {
                    flag = 1;
                    break;
                }

                if (a[i] > 0)
                {
                    a[i] = a[i]-1;
                    a.push_back(a[i]);
                }
               
            }
            if (flag == 1)
            {
                break;
            }
        }
        cout<<"YES"<<endl;
        l ans;
        sort(a.begin(),a.end());
        for(l q=0;q<a.size();q++)
        {ans = pow(2,a[q]);
            cout<<ans<<" ";
        }
    }

    return 0;
}