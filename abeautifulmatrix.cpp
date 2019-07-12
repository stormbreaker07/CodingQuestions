#include<iostream>
using namespace std;

int main()
{int x,n,t,diff1,diff2;
    int array[5][5];
for(int i=0;i<5;i++)
{for(int j=0;j<5;j++)
{cin>>x;
if(x==1)
{n=i;
t=j;
array[i][j]=x;}
else
{array[i][j]=x;}
}}
if((2-n)<0)
{diff1=0-(2-n);}
else
{diff1=2-n;}
if((2-t)<0)
{diff2=0-(2-t);}
else
{diff2=2-t;}
cout<<diff1+diff2<<endl;
  return 0;  
}