#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	long int n,dig;
	while(t--)
	{
		cin>>n;
		if(n%4==0)
		{
			dig = n/4;
		}
		else 
		{
			dig = (n/4) + 1;	
		}
		
		for(int i=1;i<=n-dig;i++)
		{
			cout<<'9';
		}
		for(int i=1;i<=dig;i++)
		{
			cout<<'8';
		}
		cout<<endl;
	}
	
	return 0;
}
