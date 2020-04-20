#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int x;
	int count =0;
	for(int i=1;i<n;i++)
	{
		x= a[i-1];
		if(a[i] > k-x )
		{
			a[i] = a[i];
		}
		else if(a[i] < k-x)
		{
			count += (k-x)-a[i];
			a[i] = k-x;
		}

	}
	cout<<count<<endl;
	for(int i=0;i<n;i++)
	{cout<<a[i]<<" ";}
	
	return 0;
}
