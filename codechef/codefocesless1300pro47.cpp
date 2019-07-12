#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y;
cin>>x>>y;
int w,c=0;
for(int i=0;i<=sqrt(x);i++)
{w=x-(i*i);
if(w*w+i==y)
{c++;}
}
cout<<c;
return 0;
}