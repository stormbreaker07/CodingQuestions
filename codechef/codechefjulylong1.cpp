#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
{    int n;
	cin>>n;
	long long int a[n],sum=0;
	long double airt1,airt2;
	for(int j=0;j<n;j++)
	{cin>>a[j];
		sum=sum+a[j];
	}
	int c=0;
	airt1=sum/(n*1.00);
	airt2=sum-(n-1)*airt1;
	for(int j=0;j<n;j++)
	{if(a[j]==airt2)
		{cout<<j+1<<endl;
			c=2;
			break;}
	}
	if (c!=2)
    {cout<<"Impossible"<<endl;}
}
return 0;	
}
