#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{cin>>a[j];
		}
		sort(a,a+n);
		long int count=0;
		for(int j=1;j<n;j++)
		{
		int num=a[n-j]-a[0];
		count+=num;
}
	cout<<count<<endl;
}

	return 0;
}
		
		
