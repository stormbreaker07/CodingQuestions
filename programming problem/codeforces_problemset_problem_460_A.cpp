#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,m;
cin>>n>>m;
long int sum = n;
int x = n;
int w1,w2=10;
w1=0;
for( ; ; )
{
    w2 = x/m;
    x = x+(w2-w1);
    if(w1==w2)
    {break;}
    w1 = w2;
}

cout<<x;
    return 0;
}