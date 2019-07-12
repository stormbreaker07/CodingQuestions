#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y,num;
cin>>x>>y;
for(int i=x+1;i<=y;i++)
{int t=0;
    for(int j=2;j<=sqrt(i);j++)
{if(i%j==0)
{t++;
break;}
}
if(t==0)
{num=i;
break;}
}
if(num==y)
{cout<<"YES";}
else
{cout<<"NO";}

return 0;
}