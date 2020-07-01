// #include <bits/stdc++.h>
// using namespace std;

// const int n = 100000;
// vector<int> prime;

// void sieve()
// {
//     int p[n] = {0};
//     for (int i = 3; i <= n; i += 2)
//     {
//         p[i] = 1;
//     }
//     p[1] = p[0] = 0;
//     p[2] = 1;
//     prime.push_back(2);
//     for (int i = 3; i * i <= n; i = i + 2)
//     {
//         if (p[i] == 1)
//         {
//             prime.push_back(i);
//             for (int j = i * i; j <= n; j += i)
//             {
//                 p[j] = 0;
//             }
//         }
//     }
//     return;
// }

// int main()
// {
//     sieve();
//     int t;
//     cin >> t;
//     long long int x;
//     while (t--)
//     {
//         int cont_diff = 0, cont_same = 0;
//         int a[n] = {0};
//         cin >> x;
//         vector<int> v;
//         for (int i = 0; i < prime.size(); i++)
//         {
//             if (prime[i] * prime[i] > x)
//             {
//                 break;
//             }
//             if (x % prime[i] == 0)
//             {
//                 cont_diff++;
//                 v.push_back(p[i]);
//                 while (x % prime[i] == 0)
//                 {
//                     cont_diff++;
//                     a[prime[i]] += 1;
//                     x = x / 2;
//                 }
//             }
//         }
//         if (cont_diff >= 3)
//         {
//             cout << "YES" << endl;
//             for (int i = 0; i <= 2; i++)
//             {
//                 cout << v[i] << " ";
//             }
//         }
//         else if(cont_diff==2)
//         {
//             cout<<"YES"<<endl;
//             if()

//         }
        
//     }

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
long long int x;
while(t--)
{
    cin>>x;
    vector<long long int> v;
    v.clear(); 
    long long int w = x;
    for(long long int i=2;i*i<=w;i++)
    {
        if(x%i==0)
        {
            v.push_back(i);
            x = x/i;
        }

        if(v.size()==2)
        {
            break;
        }
    }
    if(v.size()>=2)
    {
        long long int c = w/(v[0]*v[1]);
        if(c!=v[0] && c!=v[1] && c!=1)
        {cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<c<<endl;}
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


    return 0;
}