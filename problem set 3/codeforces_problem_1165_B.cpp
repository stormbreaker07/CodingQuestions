#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	sort(a,a+n);
	int count=0;
	int j=1;
	for(int i=0;i<n;i++)
	{if(a[i]>=j)
		{count++;
		j++;}
	}	
	cout<<count;		
		
	
	
	return 0;
}
