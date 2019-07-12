#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
{a[i]=i+1;
}
for(int i=x-1;i>0;i--)
{if(a[i]!=1)
    swap(a[i-1],a[i]);
}
for(int i=0;i<x;i++)
{cout<<a[i]<<" ";
}
return 0;
}