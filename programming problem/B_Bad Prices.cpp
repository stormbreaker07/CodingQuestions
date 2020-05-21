#include <bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{cin>>n;
	int a[n];
	int count =0;
	for(int j=0;j<n;j++)
	{cin>>a[j];}
	int min = a[n-1];
	for(int j=n-2;j>=0;j--)
	{if(a[j] >= min)
		{count++;}
	else
	{min = a[j];}
	}
	cout<<count<<endl;
}		
	return 0;
}
