#include<bits/stdc++.h>
using namespace std;

int count=0;
int mn=100000;

void fun(int n,int m,int count)
{cout<<"SADS";
    if(n == 0)
    {return ;}

    if(m==n)
    {cout<<count;
        mn = min(mn,count);
        return;
    }

    if(2*m <= n)
    {
        return ;
    }

    fun(n-1, m,count++);
    fun(n*2, m,count++);

return ;
}



int main()
{
    int n,m,diff1,diff2;
    cin>>n>>m;
    
    fun(n,m,0);
    cout<<mn;

    return 0;
}