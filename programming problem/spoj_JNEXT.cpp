#include <bits/stdc++.h>
using namespace std;

int main()
{int t,n,w;
	cin>>t;
	stack<int> s;
	for(int i=0;i<t;i++)
	{cin>>n;
		for(int j=0;j<n;j++)
		{cin>>w;
			s.push(w);
		}
		int p1=s.pop();
		int p2=s.pop();
		if(p1>p2)
		{s.push(p1);
			s.push(p2);
		}
		else if(p1<=p2)
		{int p3= s.pop();
			
