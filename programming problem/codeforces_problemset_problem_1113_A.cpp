#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,u;
    cin>>n>>u;
    int litr = n-1;
    litr = (litr-u)+1;

    long int num ;
    if(litr>0)
    {
        num = u;
    for(int i = 2;i<=litr;i++)
    {
        num+=i;
    }
    }
    else
    {num = n-1;}
    cout<<num;

    return 0;
}