#include<bits/stdc++.h>
using namespace std;


vector<int> prime;
int p[100000];

void sieve()
{
    for(int i=0;i<100000;i++)
    {
        p[i] = 1;
    }
    p[1]=0;
    for(int i=2;i<100000;i++)
    {
        if(p[i]==1)
        {
            if(i*i>100000)
            {break;}
            
            if(i*i<100000)
            {
                for(int j = i*i;j<100000;j += i)
                {
                    p[i]= 0;
                }
            }
        }
    }
    for(int i=0;i<100000;i++)
    {
        if(p[i]==1)
        {
            prime.push_back(i);
            cout<<i<<" ";
        }
    }
}


int main()
{
    sieve();
    int n;
    cin>>n;





    return 0;
}