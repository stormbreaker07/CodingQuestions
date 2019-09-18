#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main()
{int t;
	strat
	long long int n,w,m,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n>>k;
	w=k/(n-1);
	m=k%(n-1);
	cout<<2*abs(m-w);
    }end
    cin>>t;
    for(int k=0;k<t;k++)
    {long int n,a[2*n],sum[n];
		long long int num,ans=10000000000;
		cin>>n;
		for(int i=0;i<n;i++)
		{cin>>a[i];
			a[n+i]=a[i];
		}
		for(int i=0;i<n;i++)
		{sum[i]=a[i];
			num=0;
			for(int j=i;j<n+i-1;j++)
			{sum[j]=a[j+1]+sum[j];
				num+=sum[j];
				cout<<num<<endl;
	        }
	        ans=min(ans,num);
		}
		cout<<ans<<endl;
	}
		
	return 0;
} 
