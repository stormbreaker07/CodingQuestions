#include <bits/stdc++.h> 
#include<iostream>
#include<map>
using namespace std;
  
int main()
{multimap<int,int,greater<int> > map;
	long int n,a,num,num2;
	long long int sum=0;
	int m,b;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{cin>>a>>b;
	map.insert(pair<int,int >(b,a));
	}
	multimap<int,int> ::iterator it;
	for(it=map.begin();it!=map.end();it++)
	{num=it->second;
		num2=it->first;
		if(num>=n)
		{sum+=num2*n;
			break;}
	else if(num<n)
	{n=n-num;
		sum+=num2*num;
	}		
	}
	cout<<sum;
	
	return 0;
}
		
		
	
	
