#include<bits/stdc++.h>
using namespace std;

#define l long int



int main()
{
    l n,m;
    cin>>n>>m;
    l mprime = 102161;
    l mxprime = 123217;
    vector<l> v[n+1];
pair<l,l> p;

cout<<mprime<<" "<<mprime<<endl;
    for(l i=1;i<n-1;i++)
    {
        v[i].push_back(i+1);
        v[i].push_back(1);

    }
    v[n-1].push_back(n);
    v[n-1].push_back(mprime - (n-2));

    for(l i=1;i<n;i++)
    {
         cout<<i<<" "<<v[i][0]<<" "<<v[i][1]<<endl;
    }
l st = 1;

l w = m-(n-1);
l cont=0;
    for( ; ; )
    {
        if(cont == w)
        {break;}
        for(int j=2;j<=n-st;j++)
        {cont++;
            cout<<st<<" "<<st+j<<" "<<mxprime<<endl;
        if(cont==w)
        {break;}
        }
        
        st++;
    }

    return 0;
}