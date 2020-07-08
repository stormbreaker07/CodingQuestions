#include<bits/stdc++.h>
using namespace std;

#define l long int

int main()
{int t;
	cin>>t;
	while(t--)
	{
	
		l x,k;
		cin>>x>>k;
		k = k + 1;
		char a[2];
		string s;
		a[0] = 'a';
		a[1] = 'b';
		for(l i = 1;i<=x;i++)
		{
			s = a[k&1] + s;
			k = k/2;
		}
		
		cout<<s;
	}





	return 0;
}