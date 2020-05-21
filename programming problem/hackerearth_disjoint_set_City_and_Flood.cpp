#include<bits/stdc++.h>
using namespace std;

#define l long int 
#define MAX 1000000


l root(l arr[],l i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i = arr[i];
    }

    return i;
}



int main()
{
    l n,k;
    cin>>n;
    cin>>k;
    
    l arr[n+1];
    l size[n+1];

    for(l i=0;i<=n;i++)
    {
        arr[i]=i;
        size[i]=1;
    }
l a,b;
    for(l j=0;j<k;j++)
    {
        cin>>a>>b;
        l root_a = root(arr,a);
        l root_b = root(arr,b);
        if(size[root_a]<size[root_b])
        {
            arr[root_a] = arr[root_b];
            size[root_b] += arr[root_a];
        }
        else
        {
            arr[root_b] = arr[root_a];
            size[root_a] += size[root_b];
        }
    }
    l cont=0;
for(l j=1;j<=n;j++)
{
    if(arr[j]==j)
    {cont++;}
}
cout<<cont;



    return 0;
}