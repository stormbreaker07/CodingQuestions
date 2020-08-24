#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	long int x;
	long x1 = 6,x2 = 10 ,x3 = 14,x4 = 15;
	while(t--)
	{
		cin>>x;
		if(x>(x1+x2+x3))
		{
			x -= x1;
			x -= x2;
			if(x-x3 == x3)
			{
				x3 = x4;
			}
			cout<<x1<<" "<<x2<< " " <<x3<<" "<<x - (x1+x2+x3)<<endl;
		}
		else
		{cout<<"NO"<<endl;}
			
			
		
			
	}
	
	return 0;
}
