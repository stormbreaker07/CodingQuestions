#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	long int x,y;
	while(t--) {
		cin>>x>>y;
		long int l  = x;
		long int r = x*2;
		if(x*2 <=y)
		{ cout<<l <<" " << r<<endl;}
		else
		{
			cout<<-1<< " " << -1<<endl;
		}
	}
	
	return 0;
	}
