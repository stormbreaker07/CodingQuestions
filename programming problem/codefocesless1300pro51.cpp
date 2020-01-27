#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,a,b;
cin>>x>>a>>b;
int w=x-max(a+1,x-b)+1;
cout<<w;

    return 0;
}