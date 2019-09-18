   #include <bits/stdc++.h> 
#include<iostream>
using namespace std;

   
   int main()
    {
        long long int q,l,n,c,mid,i,j,w,k,t;
        cin>>q;
        for( l=0;l<q;l++)
        {
        cin>>n>>c;
        long long int a[n];
        for( i=0;i<n;i++)
        {cin>>a[i];}
        sort(a,a+n);
        i=1;
        j=1000000001;
        w=0;
        while(i<=j)
        {t=1;
        int f=a[0];
        mid=(i+j)/2;
        for(int k=1;k<n;k++)
        {
        if(a[k]-f>=mid)
        {t++;
        f=a[k];}
        }
        if(t<c)
        {j=mid-1;}
        else
        {w=mid;
        i=mid+1;
        }
        }
        cout<<w<<endl;
        }
        return 0;
    }









