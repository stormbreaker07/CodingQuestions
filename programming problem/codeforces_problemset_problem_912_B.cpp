#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;

long long int sum=0,j=0;


sum = n;
vector<int> v;
int w;
while(n>0)
{
    w = n&1;
    if(w==0 && k>1)
    {
        sum += (long long int)pow(2,j);
    }
    n = n/2;
j++;
}


cout<<sum;
    return 0;
}