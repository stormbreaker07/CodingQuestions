#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,m,a=0;
    cin>>n>>m;

    while(n<m)
    m%2?m++:m/=2,a++;

    cout<<a+n-m;

    return 0;
}