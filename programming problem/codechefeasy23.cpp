#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{int w,p;
		cin>>w>>p;
		double x2=(w-sqrt((w*w)-24*p))/12;
		double v2=x2*x2*x2-w*x2*x2/4+p*x2/2;
		cout<<setprecision(2)<<fixed<<v2<<endl;
	}
	return 0;
}
