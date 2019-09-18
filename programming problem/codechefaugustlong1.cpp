#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t,n;
	cin>>t;
	for(int j=0;j<t;j++)
	{cin>>n;
		long int w,k;
		long int a[n];
		for(int i=0;i<n;i++)
		{cin>>w;
			a[i]=20*w;
		}
		for(int i=0;i<n;i++)
		{cin>>k;
			a[i]=a[i]-10*k;
		if(a[i]<=0)
		{a[i]=0;}
		}
		sort(a,a+n,greater<int>());
		cout<<a[0]<<endl;
		}
	return 0;
}
		
