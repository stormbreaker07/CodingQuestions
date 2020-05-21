#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,s,w[3];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s>>w[0]>>w[1]>>w[2];
		int sum = w[0]+w[1]+w[2];
		if(s>=sum)
		{cout<<1<<endl;}
		else
		{
		if(s>=sum-w[2])
		{cout<<2<<endl;}
		else if(s>=sum-w[2]-w[1])
		{sum = sum-w[0];
		if(s>=sum)
		{cout<<2<<endl;}
		else if(s>=sum-w[1])
		{cout<<3<<endl;}	
		}	
		}
	}
	return 0;
}
