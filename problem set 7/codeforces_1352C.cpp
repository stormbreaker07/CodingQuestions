#include<bits/stdc++.h>
using namespace std;

#define l long long int

int main() {
int n;
cin>>n;
l k,x;
while(n--)
{
    cin>>x>>k;

    cout<<k + (k-1)/(x-1)<<endl;
} 


    return 0;
}