#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x =n;
    long int ans=0;
    for(int i=1;i<=n;i++)
    {ans+= ((x-1)*i)+1;
    x--;}
    cout<<ans<<endl;

    return 0;
}