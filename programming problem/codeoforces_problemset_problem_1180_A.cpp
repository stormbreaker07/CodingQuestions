#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n =1;
    int a[101];
    a[0] = 1;
    for(int i=1;i<=100;i++)
    {
        a[i] = 4*i + a[i-1];
    }
    int x;
    cin>>x;
    cout<<a[x-1];




    return 0;
}