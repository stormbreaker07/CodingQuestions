#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{long int n,c=1;
		cin>>n;
		long long int sp[n];
		
		for(long int j=0;j<n;j++)
		{cin>>sp[j];}
		
		for(long int j=1;j<n;j++)
		{if(sp[j]<=sp[j-1])
			{c++;}
		}
		cout<<c<<endl;
	}
	return 0;
}
