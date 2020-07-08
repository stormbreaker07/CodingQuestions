#include<iostream>
using namespace std;

int main()
{int t,x,a[6]={0,0,0,0,0,0};
cin>>t;
for(int i=0;i<t;i++)
{cin>>x;
if(x>=100)
{a[0]=x/100;
x=x-a[0]*100;} 
if(x>=50)
{a[1]=x/50;
x=x-a[1]*50;}
if(x>=10)
{a[2]=x/10;
x=x-a[2]*10;}
if(x>=5)
{a[3]=x/5;
x=x-a[3]*5;}
if(x>=2)
{a[4]=x/2;
x=x-a[4]*2;} 
if(x>=1)
{a[5]=x/1;
x=x-a[5]*1;}
cout<<a[0]+a[1]+a[2]+a[3]+a[4]+a[5]<<endl;
}

 return 0;   
}