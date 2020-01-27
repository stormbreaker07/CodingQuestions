#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{long long int i,sum=0,n,x;
	cin>>n>>x;
	long long int a[n];
	for(i=0;i<n;i++)
	{cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{sum+=x*a[i];
		if(x>1)
		{x=x-1;}
	}
	cout<<sum;
	return 0;
}
