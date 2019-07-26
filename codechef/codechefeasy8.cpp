#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
long long int t,w,x,i,j;
int y;
cin>>y;
for(int k=0;k<y;k++)
{cin>>t>>w;
for(i=t;i<=w;i++ )
{x=0;
    for(j=2;j<=sqrt(i);j++)
{if(i%j==0)
{x=1+x;
break;}
}
if(x==0 && i!=1)
{cout<<i<<endl;} 
}
cout<<endl;
}
return 0;   
} 
