#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    //base case
    if(n<=2)
    {
        return n;
    }
    if(n==3)
    {
        return n+1;
    }

    //recurive case
    return solve(n-1) + solve(n-2) + solve(n-3);

}


int main()
{
int n;
cin>>n;
cout<<solve(n);

    return 0;
}