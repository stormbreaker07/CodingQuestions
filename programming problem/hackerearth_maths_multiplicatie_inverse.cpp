#include<bits/stdc++.h>
using namespace std;

long int x,y,D;

long int modularexpo(long int a,long int b,long int m)
{
    if(b==0)
    {
        return 1;

    }
    else if(b%2==0)
    {
        return modularexpo((a*a)%m,b/2,m);
    }
    else if(b%2!=0)
    {
        return (x*modularexpo((a*a)%m,(b-1)/2,m))%m;
    }

}

long int fun(long int A,long int B)
{
    if(B == 0) {
        D = A;
        x = 1;
        y = 0;
    }
    else {
        fun(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

long int multiinverse(long int a,long int m)
{
    fun(a,m);
    return (x%m+m)%m;
}

int main()
{
    long int a,b,c,d;
    cin>>a>>b>>c>>d;

long int ans1 = modularexpo(a,b,d);

long int ans2 = multiinverse(c,d);

cout<<ans1*ans2;

    return 0;
}