#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int w = max(n,m);
    w = (6-w)+1;
    int den = 6;
    if(w%2==0)
    {
        w = w/2;
        den = den/2;
    }
    if(w%3==0)
    {
        w= w/3;
        den =den/3;
    }

    cout<<w<<"/"<<den;

    return 0;
}