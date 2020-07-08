#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{
l n,lim;
cin>>n>>lim;
l j=0,cont=0;
vector<l> v;
while(n>0)
{
    if(n&1==1)
    { cont++;
        v.push_back(pow(2,j));
    }
j++;
n=n/2;
}

if(v.size()<=lim)
{
    cout<<v.size()<<endl;
    for(l i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
else
{
    cout<<-1;
}


    return 0;
}