#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main()
{int c=0;
long int n,i;
cin>>n;
long int a[n];
for(i=0;i<n;i++)
{cin>>a[i];}
sort(a,a+n);
for(i=0;i<n;i++)
{
	if(a[i]+a[i+1]>a[i+2] && a[i+2]+a[i+1]>a[i] && a[i]+a[i+2]>a[i+1])
	{c=3;	
	break;		
	}
}
if(c==3)
{cout<<"YES";}
else if(c==0)
{cout<<"NO";}

return 0;
}	
