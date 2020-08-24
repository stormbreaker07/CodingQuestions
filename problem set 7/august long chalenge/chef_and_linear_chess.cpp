#include<bits/stdc++.h>
using namespace std;

#define l long long int


int main() {
	
	int t;
	cin>>t;
	while(t--) {
	l x,k ,p , mn = INT_MAX,ans=-1;
	cin>>x>>k;
	for(l i=0;i<x;i++)
	{
		cin>>p;
		if(k%p==0)
		{
			if(k/p < mn)
			{mn  = k/p;
				ans = p;
			}
		}
	}
	cout<<ans<<endl;
	
	}
	
	
	return 0;
}
