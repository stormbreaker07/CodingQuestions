#include<bits/stdc++.h>
using namespace std;

int a[15];
int num=0;
int n;

void fun(int ans,int i,int x)
{
    ans += x;
ans = ans%360;
i++;
if(i==n && ans == 0)
{
    num = 1;
    return ;
}
 
if(num==0 && i!=n)
{
    fun(ans,i,-a[i]);
    fun(ans,i,a[i]);
}

return ;
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    fun(0,0,a[0]);
    fun(0,0,-a[0]);
if(num==1)
{cout<<"YES";}
else
{
    cout<<"no";
}


    return 0;
}