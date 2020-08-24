#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
	long int x1, x2;
	cin>>x1>>x2;
	while(x2>0)
	{
		if(x1<=0)
		{
			break;
		}
		x1 -= x2;
		x2 /=2;
	}
	if(x1<=0)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	
	}
	
	
	return 0;
}
