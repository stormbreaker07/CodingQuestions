#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int n;
	cin>>n;
	long int x=0;
	int c=0;
	long int a[n];
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
		x^=a[j];
	}
	long int b1;
	vector<int> b(10000000,0);
		for(int j=0;j<n;j++)
    { 
		cin>>b1;
		x^=b1;
		b[b1] = -1;
	}
	long int y;
	int p[n];
	for(int j=0;j<n;j++)
	{
	y = x^a[j];
	if(b[y] == -1)
	{
		b[y] = 0;
		p[j] = y;
	}
	else
	{c=1;
		break;}
	}
	if(c==1)
	{cout<<-1<<endl;}

	else
	{for(int j=0;j<n;j++)
		{cout<<p[j]<<" ";}
	cout<<endl;
	}
	
	}
	return 0;
}
