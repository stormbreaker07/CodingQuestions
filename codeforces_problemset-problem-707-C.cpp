#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int a,b,c;
cin>>a;

if(a%2!=0)
{
    c = ((a*a)+1)/2;
    b = ((a*a)-1)/2;
}
else
{
    c = (a*a)/4 + 1;
    b = (a*a)/4 - 1;
}

cout<<b<<" "<<c;

    return 0;
}