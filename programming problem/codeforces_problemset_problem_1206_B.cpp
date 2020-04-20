#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int x,num=0;
    int count=0,count0=0;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
            num += x-1;
        }
        else if(x<0)
        {
            num += abs(x)-1;
            count++;
        }
        else if(x==0)
        {
            num +=1;
            count0++;
        }
    }
    if(count%2!=0)
    {
        if(count0==0)
        {
            num += 2;
        }
    }
    cout<<num;

    return 0;
}