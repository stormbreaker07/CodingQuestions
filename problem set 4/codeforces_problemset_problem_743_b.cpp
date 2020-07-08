#include<bits/stdc++.h>
using namespace std;

int main()
{
long int n,k;
cin>>n>>k;
long int w,m,ans;
for(long int i=n ; i>=0 ;i-- )
 {
     w = 1<<i;
     if(w<=k)
     {m = k - w;
     if(m==0)
     {cout<<i+1;
     break;
     }
     else
     {
         k = k-w;
     }
     }
     


    // w = log2(k);
    // m = k - pow(2,w);

    // if(m==0)
    // {
    //     ans = w + 1;
    //     break;
    // }
    // else
    // {
    //     k = k - 1<<w;
    // }
    // cout<<k<<" "<<w<<" "<<m<<endl;
    

 }


return 0;
}