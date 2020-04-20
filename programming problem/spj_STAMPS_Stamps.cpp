#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int t,n,m;
	cin>>t;
	for(long long int i=1;i<=t;i++)
	{
		cin>>m>>n;
		long long int a[n];
		for(long long int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		long int count =0;
		sort(a,a+n,greater<int>());
		for(int j=0;j<n;j++)
		{
			if(m>0)
			{m = m - a[j];
			count++;}
			else
			{break;}
		}
		if(m>0)
		{
		cout<<"Scenario #"<<i<<":"<<endl<<"impossible"<<endl<<endl<<endl;
		}
		else
		{
		cout<<"Scenario #"<<i<<":"<<endl<<count<<endl<<endl<<endl;
		}
	}
	
	
	return 0;
}
