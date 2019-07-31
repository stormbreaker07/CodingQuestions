#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int sum1,sum2;
void fun(int a[],int n,int j,int i)
{if(n>=j)
	{for(int i=0;i<=1;i++)
		{ a[j]=i;
			fun(a,n,j+1,i);
		}
	}
else if(n<j)
{sum1=0,sum2=0;
	for(int i=0;i<n/2;i++)
	{sum1+=a[i];}
for(int i=n/2;i<n;i++)
	{sum2+=a[i];}
		if(sum1==sum2 )
	{for(int i=0;i<n;i++)
	{cout<<a[i];}
	cout<<endl;
}
	return ; 
}
}

int main()
{int x;
	cin>>x;
	x=2*x;
	int a[x];
	fun(a,x,0,0);
	return 0;
}
