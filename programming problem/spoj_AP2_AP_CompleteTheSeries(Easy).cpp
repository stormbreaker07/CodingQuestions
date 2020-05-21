#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int x,y,sum;
	long long int a,d,len;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y>>sum;
		if((x+y)!=0)
		{len = (2*sum)/(x+y);
		d = (y-x)/5;
		a = x-(2*d);
		cout<<len<<endl;
		for(int j=0;j<len;j++)
		{
		cout<<a+(d*j)<<" ";	
		}
		}
		else
		{
		a=0;
		d = x/2;
		
			
		}
	}
	
	return 0;
}
