#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
long int dp[s.length()+1] = {0};
for(unsigned long int i=1;i<s.length();i++)
{
	if(s[i] == s[i-1])
	{dp[i-1]=1;}
}	
for(unsigned long int i=1;i<s.length();i++)
{
	dp[i] = dp[i]+dp[i-1];
}

long int q,x,y,data1,data2;
cin>>q;
for(int i=0;i<q;i++)
{
	cin>>x>>y;
	data2 = dp[y-2];
	if(x-1==0)
	{
		//if(dp[x-1]!=0)
		//{data1 = 0;}
     	//else if(dp[x-1]==0)
		//{data1 =0;}
		data1 = 0;
	}
	else if(x-1>0)
	{
		//if(dp[x-1]!=dp[x-2])
		//{
		//	data1 = dp[x-2];
		//}
		//else if(dp[x-1]==dp[x-2])
		//{
		//	data1 = dp[x-1];
		//}
		data1 = dp[x-2];
		
	}
	
	
	cout<<data2-data1<<endl;
}	
	
	return 0;
}
