#include<bits/stdc++.h>
using namespace std;

int optimal_binary(int n)
{
if(n<0)
{return 0;}

if( n==0)
{return 1;}

if( n==1)
{return 2;}


int num = optimal_binary(n-1) + optimal_binary(n-2);

    return num;

}



int main()
{
    int n;
    cin>>n;

    cout<<optimal_binary(n);

    return 0;
}
