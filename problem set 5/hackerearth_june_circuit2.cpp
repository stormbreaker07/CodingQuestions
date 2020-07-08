#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int n,k,x;
cin>>x;
for(int i=0;i<x;i++)
{cin>>n>>k;
if(n%(k+1)==0)
{cout<<"Dishant"<<endl;}
else
{cout<<"Arpa"<<endl;}
}

return 0;
}
