#include<bits/stdc++.h>
using namespace std;

#define l long long int
#define ran 1000000000

vector<int> v(1000000001,0);

int main()
{

for(l i=3;i<=ran;i = i+2)
{
    v[i] = 1;
}
for(l i=3;i<=ran;i = i+2)
{
    if(v[i] == 1)
    {
        for(l j=i*i;j<=ran;j = j+i)
        {
            v[j] = 0;
        }
    }
    v[2] = 1;
    v[1] = v[0] = 0;
}

    int t;
    cin>>t;
    while(t--)
    {
        l x,y;
        cin>>x>>y;
        l cont = 0;
        for(l i=x;i<=y;i++)
        {
            if(v[i]==1)
            {cont++;}
        }
        cout<<cont;
        cont=0;
    }

    return 0;
}