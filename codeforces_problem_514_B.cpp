#include<bits/stdc++.h>
using namespace std;

int main()
{int n,x0,y0,x,y,count=0;
	cin>>n>>x0>>y0;
	set<double> slope;
	double m;
	for(int i=0;i<n;i++)
	{cin>>x>>y;
		if(x-x0!=0)
		{m = (double)(y-y0)/(double)(x-x0);	
		slope.insert(m);
		}
		else
		{count=1;}
	}
	n = slope.size()+count;
	cout<<n;
	return 0;
}
		
