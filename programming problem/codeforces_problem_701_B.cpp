#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,b;
	cin>>n>>m;
	set<int> s1;
	set<int> s2;	
	for(int i=0;i<m;i++)
	{
	cin>>a>>b;
	s1.insert(a);
	s2.insert(b);
	long long int ans = (n-s1.size())*(n-s2.size());
	cout<<ans<<" ";
	}
	
	return 0;
}
