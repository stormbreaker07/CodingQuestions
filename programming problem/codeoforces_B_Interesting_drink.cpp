#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int n,num;
	cin>>n;
	long int dp[100001] = {0};
	for(long int i=0;i<n;i++)
	{
		cin>>num;
		dp[num] = dp[num]+1;
	}
	for(long int i=1;i<100001;i++)
	{dp[i] = dp[i]+dp[i-1];}
	long int q;
	cin>>q;
	long long int s;
	for(long int i=0;i<q;i++)
	{
		cin>>s;
		if(s<=100000)
		{cout<<dp[s]<<endl;}
		else
		{cout<<dp[100000]<<endl;}
	}	
		


	return 0;
}
