#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y;
cin>>x>>y;
int a[y],b[y];
vector<int> v;
for(int i=0;i<y;i++)
{cin>>a[i];
b[i]=a[i];
}
sort(a,a+y,greater<int>());

int t=0,e=0,w=a[0];
long long int sum=0;
for(int j=w;j>=1;j--)
{
    for(int i=0;i<y;i++)
    {if(a[i]==j)
    {sum+=a[i];
    a[i]=a[i]-1;
    e=e+1;
    if(e==x)
    {break;}
    }
    }
    if(e==x)
    {break;}

}
cout<<sum<<" ";
int g=x,z;
long long int sum2=0;
sort(b,b+y);
for(int i=0;i<y;i++)
{if(g>=b[i])
{g=g-b[i];
z=b[i];
for(int j=1;j<=z;j++)
{sum2+=b[i];
b[i]=b[i]-1;}
}
else if(g<b[i])
{for(int j=1;j<=g;j++)
{sum2+=b[i];
b[i]=b[i]-1;}
break;
}
}
cout<<sum2;
return 0;
}