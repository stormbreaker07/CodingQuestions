#include<bits/stdc++.h>
using namespace std;

#define l unsigned long long int

int main()
{
	l n,k,x;
	cin>>n>>k;
	if(k>1)
	{l ans = (n*(n+1))/2;
	while(n>0)
	{
		x = n/k;
		ans -= (k-1)*((x*(x+1))/2);
		n = x;
	}
	}
	else if(k==1)
	{
		ans = n;
	}
	cout<<ans;
	
	return 0;
}