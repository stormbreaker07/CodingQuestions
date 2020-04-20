#include<bits/stdc++.h>
using namespace std;

#define  l long long int 

int main()
{
    l n,k;
    cin>>n>>k;
    l a[n],num[n];
    l sum=0,temp_sum=0;
    for(l i=0;i<n;i++)
    {cin>>num[i];}
    for(l i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]==1)
    {
        sum += num[i];
    }
    }
    for(l i=0;i<k;i++)
    {
        if(a[i]==0)
        {
            temp_sum +=num[i];
        }
    }
    temp_sum += sum;

    l i = 1,j=k;
    l mx = temp_sum;

    cout<<mx<<endl;
    for(l i=1,j=k;i<n,j<n;i++,j++)
    {
        if(a[i-1]==0)
        {
            temp_sum -= num[i-1];
        }
        
        if(a[j]==0)
        {
            temp_sum  += num[j];
        }

        mx = max(mx,temp_sum);
    }
    cout<<mx;




    return 0;
}