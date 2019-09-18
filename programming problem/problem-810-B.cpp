#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{long long int i,n,f,k,l,sum=0;
	vector<long long int> a;
	cin>>n>>f;
	for(i=0;i<n;i++)
	{cin>>k>>l;
		if(k>=l)
		{sum+=l;
			l=0;
			if(k>=l)
		{a.push_back(l);}
		else if(k<l)
		{a.push_back(k);}
		}
		else if(k<l)
		{sum+=k;
			l=l-k;
		if(k>=l)
		{a.push_back(l);}
		else if(k<l)
		{a.push_back(k);}
	    }	
	}
	sort(a.begin(),a.end(),greater<int>());
	for(i=0;i<f;i++)
	{sum+=a[i];}
	cout<<sum;
	return 0;
}
		
