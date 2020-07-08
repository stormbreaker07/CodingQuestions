#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{
    l n;
    cin>>n;
vector<l> ind(n+1,0);
vector<l> v(n+1,200111);
set<l>  st;
set<l> :: iterator it;

    for(l i=1;i<=n;i++)
    {cin>>ind[i];
    st.insert(ind[i]);
    }

    v[1] = 0;
    v[ind[1]] = min(v[ind[1]],v[1]+1);
l w;
    for(l i=2;i<=n;i++)
    {
        v[i] = min(v[i],v[i-1]+1);
        
        v[ind[i]] = min(v[i]+1,v[ind[i]]);


    }

   

    for(it = st.begin();it !=st.end();it++)
    {
        w = *it;
        for(int i =1;i<=n;i++)
        {
            if(w-i>0 && w+i<=n)   
            {v[w-i] = min(v[w]+i,v[w-i]);
            v[w+i] = min(v[w]+i,v[w+i]);
            if(v[w-i] < v[w]+i && v[w+i]<v[w]+i)
            {break;}
            }
            else
            {
                break;
            }
        }

    }

     for(l i=1;i<=n;i++)
    {cout<<v[i]<<" ";}


    return 0;
}