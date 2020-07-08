#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{long int n,index,value,sum=0;
	cin>>n;
	int a[9]={0};
	for(int j=0;j<n;j++)
	{
		cin>>index>>value;
		if(a[index]<value && index<=8)
		{a[index]=value;}
	}
	for(int j=1;j<9;j++)
	{
		sum += a[j]; 
	}
	cout<<sum<<endl;
	sum=0;
}	
	
	return 0;
}
