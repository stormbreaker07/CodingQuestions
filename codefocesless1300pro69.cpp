#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y,ap_100=0,ap_200=0;
cin>>x;
for(int i=0;i<x;i++)
{cin>>y;
if(y==100)
{ap_100+=1;}
else if(y==200)
{ap_200+=1;}
}
if((ap_100)+(ap_200)==1)
{cout<<"NO";
}
else
{int t=ap_200%2;
t=t*2;
ap_100=ap_100-t;
if(ap_100%2==0 && ap_100>=0)
{cout<<"YES";}
else
{cout<<"NO";}
}
return 0;
}
