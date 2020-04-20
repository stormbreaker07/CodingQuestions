#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		long int sum=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			sum+=a[j];
		}
		if(n>2)
		{	
			if(m<n)
			{cout<<-1<<endl;}
			else if(n==m)
			{
				cout<<2*sum<<endl;
				for(int k=1;k<n;k++)
				{cout<<k<<" "<<k+1<<endl;}
				cout<<n<<' '<<1<<endl;
			}
		}
		else if(n<=2)
		{cout<<-1<<endl;}
	}
	
	
	
	return 0;
}
