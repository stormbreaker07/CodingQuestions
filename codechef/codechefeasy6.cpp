
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main()
{int t,b,s;
	cin>>t;
	for(int i=0;i<t;i++)
	{long int sum=0,q;
		cin>>b>>s;
		int a[b];
		for(int j=0;j<b;j++)
		{cin>>a[j];
			sum+=a[j];
		}
		q=sum/s;
	for(int j=0;j<b;j++)
	{if((sum-a[j])/s==q)
		{q=-1;
			break;}
	}
	cout<<q<<endl;
}	
return 0;
}
