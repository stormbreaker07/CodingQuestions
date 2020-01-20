#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,num,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
		int count1=0,count2=0;
		for(int j=0;j<n;j++)
		{cin>>num;
			if(num == 2)
			{count1++;}
			if(num == 0)
			{count2++;}
		}
		cout<<((count1*(count1-1))+(count2*(count2-1)))/2 <<endl;
		count1=0,count2=0;
	}
	return 0;
}
