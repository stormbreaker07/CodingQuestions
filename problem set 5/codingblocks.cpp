// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// //     string s1, s2;
// //     vector<string> v;

// //     getline(cin, s1);
// //     getline(cin, s2);
// //     string s3;
// //     for (int i = 0; i < s1.size(); i++)
// //     {
// //         if (s1[i] == ' ')
// //         {
// //             v.push_back(s3);
// //             s3.clear();
// //         }
// //         else
// //         {
// //             s3 = s3 + s1[i];
// //         }
// //     }
// //     v.push_back(s3);
// //     int c = 0;
// //     long int mx = 100000;
// //     for (int i = 0; i < v.size(); i++)
// //     {
// //         c = 0;
// //         for (int j = 0; j < s2.size(); j++)
// //         {
// //             size_t found = v[i].find(s2[j]);
// //             if (found != v[i].size())
// //             {
// //                 c = 0;
// //             }
// //             else if (found == v[i].size())
// //             {
// //                 c = 1;
// //                 break;
// //        Bit Manipulation
// // 0 of 16 contents completed
// //       }
// //         }

// //         if (c == 0)
// //         {
// //             mx = min(mx, (long int )v[i].size());
// //         }
// //     }
// //     cout<<mx;

// // long int n,k;
// // cin>>n>>k;
// // int w[n+1],a[n+1]= {0};
// // for(int i=1;i<=n;i++)
// // {
// //     cin>>w[i];
// //     a[w[i]] = i;

// // }
// // long int m,loc1;
// // long int cont=0;
// // for(int i=n;i>=1;i--)
// // {
// //     if(a[i] == ((n+1)-i))
// //     {continue;}
// //     else
// //     {
// //         loc1 = a[i];
// //         m = w[(n+1)-i];
// //         a[m]  = loc1;
// //         a[i] = (n+1)-i;
// //         swap(w[(n+1)-i],w[loc1]);
// //         cont++;
// //     }
    
// //     if(cont==k)
// //     {break;}
// // }


// // if(cont<k)
// // {
// //     string s1, s2;
// //     vector<string> v;

// //     getline(cin, s1);
// //     getline(cin, s2);
// //     string s3;
// //     for (int i = 0; i < s1.size(); i++)
// //     {
// //         if (s1[i] == ' ')
// //         {
// //             v.push_back(s3);
// //             s3.clear();
// //         }
// //         else
// //         {
// //             s3 = s3 + s1[i];
// //         }
// //     }
// //     v.push_back(s3);
// //     int c = 0;
// //     long int mx = 100000;
// //     for (int i = 0; i < v.size(); i++)
// //     {
// //         c = 0;
// //         for (int j = 0; j < s2.size(); j++)
// //         {
// //             size_t found = v[i].find(s2[j]);
// //             if (found != v[i].size())
// //             {
// //                 c = 0;
// //             }
// //             else if (found == v[i].size())
// //             {
// //                 c = 1;
// //                 break;
// //        Bit Manipulation
// // 0 of 16 contents completed
// //       }
// //         }

// //         if (c == 0)
// //         {
// //             mx = min(mx, (long int )v[i].size());
// //         }
// //     }
// //     cout<<mx;


// long long int n,sum=0;
// long long int md = (long long int)pow(10,9)+7;
// cin>>n;
// set<long long int > s;
// long long int x;
// for(int i=0;i<n;i++)
// {
//    cin>>x;
//     s.insert(x);
// }
// vector<long long int > v;
// set<long long int> :: iterator it;
// for(it = s.begin();it!=s.end();it++)
// {
//     v.push_back(*it);
// }

// long long int siz=1,mx=0;

// for(int i=0;i<v.size()-1;i++)
// {
//     if(v[i]!=v[i+1]-1)
//     {
//         siz=0;
//         mx = max(siz,mx);
//         siz=0;
//     }
//     else
//     {
//         siz++;
//     }
// }
//  mx = max(siz,mx);
// siz = mx;
// cout<<siz<<endl;
// long long int len = siz;
// for(long long int i=1;i<=siz;i++)
// {
//     sum = (sum + i*len)%md;
//     len--;
// }

// cout<<sum;


// return 0;
// }

