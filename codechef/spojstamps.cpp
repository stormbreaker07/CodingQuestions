#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int t,i,j,n,stamps;
	cin>>t;
	for(i=0;i<t;i++)
	{cin>>stamps>>n;
	long int a[n];	
	for(j=0;j<n;j++)
	{cin>>a[j];}
	sort(a,a+n,greater<int>());
	long long int sum=0;
	int c=0;
	for(j=0;j<n;j++)
	{if(sum<stamps)
		{sum+=a[j];
			c=3;}
		else
		{cout<<"Scenario #"<<i+1<<":"<<endl<<j<<endl;
		c=2;
		break;
		}
	}
	if(c==3)
	{cout<<"Scenario #"<<i+1<<":"<<endl<<"impossible"<<endl;}
	
}	
	return 0;
}

