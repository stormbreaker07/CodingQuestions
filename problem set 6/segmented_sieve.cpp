#include<bits/stdc++.h>
using namespace std;

const int N = 100000;
vector<int> prime1;
int p[N+1] = {0};

void prime()
{
    for(int i=2;i<=N;i++)
    {
        if(p[i]==0)
        {
            prime1.push_back(i);
            for(int j=i;j<=N;j+=i)
            {
                p[j] = 1;
            }
        }
    }


}





int main()
{
prime();

int t;
cin>>t;
while(t--)
{
    long long int n,m;
    cin>>m>>n;
    int dif = n-m;
    int segment[dif+1];
    for(int i=0;i<n-m+1;i++)
    {segment[i]=0;}

    for(auto x: prime1)
    {
        if(x*x>n)
        {
            break;
        }
         int start = (m/x)*x;
         
         if(x>=m && x<=n)
         {
             start = x*2; 
         }

         for(int i=start ;i<= n;i+=x)
         {
             segment[i-m] = 1;
         }
    }
    // for(int i=0;i<prime1.size();i++)
    // {cout<<prime1[i]<<" ";}
    // cout<<endl;
    
    for(int i=m;i<=n;i++)
    {
        if(segment[i-m]==0 && i!=1)
        {cout<<i<<endl;}
    }
    cout<<endl;
}





    return 0;
}