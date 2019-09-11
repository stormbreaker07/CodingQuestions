#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int n,x,sum=0,w;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{cin>>w;
		sum+=w;
	}
	sum=abs(sum);
	if(sum==0)
	{cout<<"0";}
	else if(sum<=x)
	{cout<<"1";}
	else if(sum>x)
	{w=sum/x;
		if(sum%x!=0)
		{w=w+1;}
		cout<<w;
	}
	return 0;
}
