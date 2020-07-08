#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
/*changes for commit check */

int n,x,t,w,sum=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++)
{cin>>t;
arr[i]=t;}
sort(arr,arr+x);
cout<<'w';
n=arr[x-1]+arr[0];
for(int j=1;j<=x/2;j++)
{w=arr[x-j];
cout<<'e';
for(int k=0;k<=x/2;k++)
{cout<<'q';
    if(w+arr[k]==n)
{cout<<'d';
    sum=1+sum;
cout<<sum<<endl;}
else {continue;}
}}
cout<<sum;
return 0;
}