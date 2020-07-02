#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length(); 
	int q[n]={0};
	int b[n] = {0};
	for(int i=0;i<n;i++)
	{
		if(s[i]=='Q')
		{q[i] = 1;}
		else if(s[i]=='A')
		{b[i] = -1;}
	}
	for(int i=n-2;i>=0;i--)
	{
		
		q[i] = q[i]+q[i+1];
	}
	
	for(int i=0;i<n;i++)
	{
		if(b[i]==-1)
		{q[i] = -1;}
	}
	
		
	long int ans=0;	
	int countA=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='Q')
		for(int j=i+1;j<n;j++)
		{
			if(q[j] == -1)
			{
				countA +=1;
			}
			else if(q[j]>0)
			{
				ans += countA*q[j];
				countA=0;
			}	
		}
		countA=0;		
	}
	cout<<ans;
		
	



	return 0;
}

