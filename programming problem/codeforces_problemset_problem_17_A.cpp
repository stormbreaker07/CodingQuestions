#include<bits/stdc++.h>
using namespace std;

int const n = 1000;
int p[1000];
vector<int> prime;

void sieve()
{
    for(int i=0;i<1000;i++)
    {
        p[i] = 1;
    }
    p[1] = 0;
    for(int i=2;i*i<=1000;i++)
    {
        if(p[i]==1)
        {
            for(int j = i+i;j<1000;j = j = j+i)
            {
              p[j] = 0;
            }
        }
    } 

    for(int i=0;i<1000;i++)
    {
        if(p[i]==1)
      {prime.push_back(i);}
    }
}


int main()
{
    sieve();

int sum[prime.size()] = {0};
    for(int i=0;i<prime.size()-1;i++)
    {
        sum[i] = prime[i]+prime[i+1]; 
    }

    // for(int i=0;i<prime.size();i++)
    // {
    //     cout<<sum[i]<<" "; 
    // }

    int x,y;
    cin>>x>>y;
    int count=0;
    for(int i=0;i<prime.size()-1;i++)
    {
        if(sum[i]<x)
        {
            if(p[sum[i]+1]==1)
            {count++;}
        }
        else
        {
            break;
        }
        
    }
    if(count>=y)
    {cout<<"YES";}
    else
    {
        cout<<"NO";
    }
    

    return 0;
}