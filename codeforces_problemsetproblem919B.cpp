#include <bits/stdc++.h>
using namespace std;

int fun(long long int d)
{int x =0;
while(d)
{
    x += d%10;
    d = d/10; 
}
    return x;
}

int main()
{
    int k;
    cin >> k;
    long long int x=0,digi;
        for( ;  ; )
        {
            if(k==0)
            {break;}
            x++;
            digi = fun(x);
            if(digi == 10)
            {k--;}
        }
    cout<<x;
    return 0;
}