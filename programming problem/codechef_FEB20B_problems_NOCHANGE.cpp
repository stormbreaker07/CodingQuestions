#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
long int sum;
for(int i=0;i<t;i++)
{
long int x,index;
int n,c=0,c1=1;
cin>>n>>sum;
long int a[n];
for(int j=0;j<n;j++)
{
cin>>a[j];
if(sum%a[j]!=0)
{index=j;
c=1;
}
}
int rep[n+1] ={0};
if(c==1)
{
rep[index] = (sum/a[index])+1;	
c1=0;
}
else
{
for(int j=n-1;j>=0;j--)
{
if(sum%a[j]==0)
{
x = sum/a[j];
sum = sum -a[j]*(x-1);
rep[j] = x-1; 
}
else if(sum%a[j]!=0)
{
x=sum/a[j];
c1=0;
rep[j] = x+1;
break; }
}}

if(c1==0)
{cout<<"YES ";
for(int j=0;j<n;j++)
{cout<<rep[j]<<" ";}
cout<<endl;
}
else if(c1==1)
{
cout<<"NO"<<endl;
}

}
return 0;
}
