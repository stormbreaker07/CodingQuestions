#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
vector<int> v;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
}
if(n!=0)
{
    v.push_back(n);
}

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<< " ";
}

    return 0;
}