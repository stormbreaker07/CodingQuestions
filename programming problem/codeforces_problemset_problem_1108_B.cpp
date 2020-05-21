#include<bits/stdc++.h>
using namespace std;

#define l long int 

int findSingle(int ar[], int ar_size) 
    { 
        // Do XOR of all elements and return 
        int res = ar[0]; 
        for (int i = 1; i < ar_size; i++) 
            res = res ^ ar[i]; 
  
        return res; 
    } 

int main()
{
    l n;
    cin>>n;
    l a;
    vector<l> ind(100001,0);
    l mxind =0;
    for(int i=0;i<n;i++)
    {
        cin>>a;

    mxind = max(a,mxind);
        ind[a]++;
    }
    
    vector<l> v;
    l m=1;
  for(l i=1;i<mxind+1;i++)
  {
      if(ind[i]==1)
      {v.push_back(i);}
      else if(ind[i]==2)
      {
          m = max(m,i);
      }
      
  }

   
    
    if(v.size()==0)
    {cout<<m<<" "<<m;}
    
    else if(v.size()==1)
    {
         l w = v[0];
    l mx=m,mn=m;

        cout<<m<<" "<<v[0];
    }
    
    else if(v.size()>=2)
    {
         l w = v[0];
    l mx=m,mn=m;

        for(int i=1;i<v.size();i++)
    {
        if(v[i]%w==0)
        {
            mx = max(mx,v[i]);
        }
        else
        {
            mn = max(mn,v[i]);
      
        }
    }
    cout<<mx<<" "<<mn;
    }


    return 0;
}