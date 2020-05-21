#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{

   if(a[0]==b[0])
    {
       size_t found = a.find(b);
        if(found == 0)
        {return a.length()>b.length();}
        else
        {
            a<b;
        }


    }
    return a<b;

}

int main()
{
    // int t,n,m;
    // cin>>t;
    // for(int i=0;i<t;i++)
    // {
    //     cin>>n>>m;
    //     int a[n+1]={0};
    //     for(int j=1;j<=n;j++)
    //     {
    //         cin>>a[j];
    //     }
    //     int x,y;
    //     if(m>0)
    //     {for(int j=0;j<m;j++)
    //     {
    //         cin>>x>>y;
    //     }
    //     }
    //     long int cont=0;
    //     if(m==0)
    //     {
    //         for(int j=1;j<=n;j++)
    //         {
    //             if(a[j]!=j)
    //             {
    //                 swap(a[j],a[a[j]]);
    //                 cont++;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         cont=0;
    //     }

    //     cout<<cont-1<<endl;
        
    // }
    int n;
cin>>n;
    string s[n];

   for(int i=0;i<n;i++)
   {
      cin>>s[i];
   } 

    sort(s,s+n);

    sort(s,s+n,cmp);


    for(int i=0;i<n;i++)
    {cout<<s[i]<<endl;}
    return 0;
}