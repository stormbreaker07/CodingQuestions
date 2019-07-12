#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int n,mx=0;
cin>>n;
int x,y;
int w=0;
for(int i=1;i<=n;i++)
{cin>>x>>y;
w=w-x;
w=w+y;
if(w>=mx)
{mx=w;}
}
cout<<mx;
return 0;
}