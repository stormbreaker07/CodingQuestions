/*#include<bits/stdc++.h>
using namespace std;

#define md 1000000007


int main()
{
int w = 1000000;
	long long int f[w+2];

f[0] = 1; 
f[1] = 1; 

for (int i = 2; i <= w; i++) 
{ 
	f[i] = (f[i-1] + f[i-2])%md;
} 

	
	string s;
	cin>>s;
	s=s+'1';
	long long int dp[s.length()]={0};
	int goku=0;
	int  count1=1,count2=1;
	long long int m;
	for(unsigned int i=0;i<s.length();i++)
	{
		if(s[i]=='m' || s[i]=='w')
		{
			goku=1;
			break;
		}
		
		
		if(i==0)
		{dp[0]=1;}
		else
		{	if(s[i]==s[i-1] && s[i]=='n')
			{
				count1++;
				dp[i] = dp[i-1];
			}	
			else
			{
				m = f[count1]; 
				dp[i] = (dp[i-1]*m)%md;
				
				count1 = 1;
			}
			
			if(s[i]==s[i-1] && s[i]=='u')
			{
				count2++;
				dp[i] = dp[i-1];
			}	
			else if(s[i-1] == 'u' && (int(s[i])!=117) )
			{ m = f[count2];
				dp[i] = (dp[i-1]*m)%md;
				count2 = 1;
			}	
			
		}
	
	}
	
	
	
	if(goku==1)
	{cout<<0;}
	else
	{cout<<dp[s.length()-1]<<endl;}
	
	
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

#define md 1000000007


int main()
{
int t,n,k;
cin>>t;
for(int i=0;i<t;i++)
{
	cin>>n>>k;
	int a[n];
	char x;
	for(int j=0;j<n;j++)
	{
		cin>>x;
		if(x=='H')
		{a[j] = 1;}
		else
		{a[j] = 0;}
	}

	for(int j=n-1;j>n-(k+1);j--)
	{
		if(a[j] == 0)
		{a[j] = -1;}
		else if(a[j] == 1)
		{
			for(int w=0;w<j;w++)
			{a[w] = 1-a[w];}
			a[j] = -1;
		}
		
	}
	
	if(n-k>0)
	{int count=0;
	for(int j=0;j<n-k;j++)
	{if(a[j]==1)
		{count++;}	
	}
	cout<<count<<endl;
	}
	else if(n-k<=0) 
	{cout<<'0'<<endl;}
	
	
}
	return 0;	
}
















