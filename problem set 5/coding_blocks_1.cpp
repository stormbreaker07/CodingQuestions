#include<bits/stdc++.h>
using namespace std;

#define l long int
#define ll long long int 

int main()
{
	int t;
	cin>>t;
	l n,k,x; 
	ll ans=0,cont=0;
	while(t--)
	{cont=0;
		cin>>n>>k;
		for(l i=k;i<=n;i= i+k)
		{cont=0;
			x = i;
			while(x%k==0 && x>0)
			{
				cont++;
				x = x/k;
			}
			ans += cont;
		}
		cout<<ans<<endl;
		cont=0;
		ans=0;
	}
	


return 0;
}