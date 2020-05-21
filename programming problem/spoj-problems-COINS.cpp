/*
#include <bits/stdc++.h>
using namespace std;

int fun(int n,int dp[]);
int sum=0;

int main()
{
	int n;
	while(cin>>n)
	{
		int dp[n];
		for(int i=0;i<n;i++)
		{sum=0;
			dp[i]=-1;
		}
		int w = fun(n,dp);
		cout<<w;
		
	}
	
	
	
	return 0;
}



int fun(int n,int dp[])
{
	if(n==1)
	{return 1;}
	if(n<=0)
	{return 0;}
	
	if(dp[n]!=-1)
	{return dp[n];}
	else
	{sum = fun(n/2,dp)+fun(n/3,dp)+fun(n/4,dp);
	dp[n] = max(sum,n);
	cout<<"one time";
	return dp[n];
	}
}


#include<bits/stdc++.h>
using namespace std;

long long int sum = 0;
int fun(long long int x,long long int a[]);


	


int main()
{
long long int n;
long long int *a;
while(cin>>n)
{
	a=(long long int*)calloc(n+1,sizeof(long long int));
cout<<fun(n,a)<<endl;	

}
return 0;
}

long long int c=1;
int fun(long long int x,long long int a[])
{
if(x==1 || x==0)
{sum=x;}
else if(a[x]!=0)
{return a[x];
}
else if(x>1)
{
	sum=fun(x/2,a)+fun(x/3,a)+fun(x/4,a);}
if(sum>=x)
{a[x]  = sum;
	return a[x];}
else if(sum<x)
{a[x] = x;
	return a[x];}
}
*/

    #include<bits/stdc++.h>
    using namespace std;
     
    long long int sum=0;
    long long int fun(long long int x,long long int a[]);
    	
     
     
    int main()
    {
    long long int n;
    long long int *a;
    while(cin>>n)
    {
    	a=(long long int*)calloc(n+1,sizeof(long long int));
    cout<<fun(n,a)<<endl;	
     
    }
    return 0;
    }
     
    long long int c=1;
    long long int fun(long long int x,long long int a[])
    {
    if(x==1 || x==0)
    {return x;}
    else if(a[x]!=0)
    {return a[x];
    }
    else if(x>1)
    {
    sum=fun(x/2,a)+fun(x/3,a)+fun(x/4,a);
    a[x] = max(sum,x);
    return a[x];
    }	
     
    } 
 
