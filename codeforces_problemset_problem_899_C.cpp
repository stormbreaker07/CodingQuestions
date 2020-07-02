#include<bits/stdc++.h>
using namespace std;

#define l long int 

int main()
{
    l n;
    cin>>n;
long long int num=0;
    for(l i=1;i<=n;i++)
    {
        num += i;
    }
l w = num;
    num = num/2;
    l x = num;
vector<l> v;
    for(l i=n;i>0;i--)
    {
        if(num>=i)
        {num =num-i;
            v.push_back(i);
        }
    }
    cout<<w - 2*x<<endl;
    for(l i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



 
    return 0;
}