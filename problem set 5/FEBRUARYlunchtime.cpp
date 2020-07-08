/*
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

*/

#include<bits/stdc++.h>
using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
int t,n,k;
cin>>t;
for(int i=0;i<t;i++)
{	
	
	cin>>n>>k;
	int a[n];
	vector<int> v;
	v.push_back(0);
int con=0;
	for(int j=0;j<n;j++)
	{cin>>a[j];
		if(j>0)
		{
		if(a[j]!=a[j-1])
			{con =1;
			v.push_back(j);	
			}	
		}
	}
	int mx =0,ln=0;

	
	
	int w;
	if(con==1)
	{for(unsigned int j=0;j<v.size();j++)
	{int dp[k+1]={0};
		if(mx>n-v[j])
		{break;}
		for(int m=v[j];m<n;m++)
		{
				dp[a[m]] = 1;
			w = count(dp,dp+(k+1),1);
			if(w == k)
			{
			ln = m-v[j];
			break;	
			}
		}
		if(w<k)
		{
		ln = n-v[j];	
		}
		if(mx<ln)
		{mx = ln;
			if(mx == n-v[j])
			{break;}			
			} 
	}
	}
	else
	{mx = n;}
	cout<<mx<<endl;
	
}
	
	
	


	return 0;
}




























