#include<bits/stdc++.h>
using namespace std;

int x,y,cx,cy;

void fun(int a , int b)
{
if(b==0)
{
    x=1;
    y=0;
return ;
}
fun(b,a%b);
cx = y;
cy = x - (a/b)*y;

x = cx;
y =cy;

return ;
}


int extended_euclid(int a,int m)
{
    fun(a,m);
    return (x+m)%m;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<extended_euclid(a,b);
   
    return 0;
}