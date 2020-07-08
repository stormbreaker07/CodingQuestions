#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,num;
	cin>>t;
	for(int i=0;i<t;i++)
	{long long int n,a,s,b,c,d,e;
	long double x = 10;
		cin>>n;
		cin>>a;
		s=(long long)2*pow(x,n)+a;
		cout<<s<<endl;
		cout.flush();
		cin>>b;
		c=pow(x,n)-b;
		cout<<c<<endl;
		cin>>d;
		e=pow(x,n)-d;
		cout<<e<<endl;
		cout.flush();
		cin>>num;
		if(num == -1)
		{break;}
		}
	return 0;
}
