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
//                 if(j==1)
//                 {
//                     if(p[j]<p[j-1])
//                     {
//                         flag=1;
//                         break;
//                     }
//                     else if(p[j]>p[j-1])
//                     {
//                         if(c[j]>=c[j-1])
//                         {c1=1;}
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


// #include <bits/stdc++.h  
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
                            
    //                     // #include <bits/stdc++.h>
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
    //                     // #include <bits/stdc++.h>
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
    //                     // #include <bits/stdc++.h>
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
    //                     // #include <bits/stdc++.h>
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
    //                     // #include <bits/stdc++.h>
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
    // }        }
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
    // }        {
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
    // }        {
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
    // }        {
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
    // }        if(c[j]==c[j-1])
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
    // }t  

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        l n,x,sum=0,w;
        cin>>n>>x;
        vector<l> a;
        for(l j=0;j<n;j++)
        {
            cin>>w;
            if(w>=x)
            {
                sum += w-x;
            }
            else if(w<x)
            {
                a.push_back(w);
            }
        }

        sort(a.begin(),a.end(),greater<l>());
        l dif =0,cont=0;
        for(l j=0;j<a.size();j++)
        {
            dif = x-a[j];
            if(dif<=sum)
            {
                cont++;
                sum -= dif;
            }
            else
            {
                break;
            }
        }
        cout<<cont<<endl;

    }

    return 0;
}