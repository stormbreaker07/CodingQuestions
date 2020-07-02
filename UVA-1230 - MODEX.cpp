
#include<bits/stdc++.h>
using namespace std;


long long int fun(long long int x,long long int y,long long int n)
{
if(y==0)
{return 1;}
else if(y%2==0)
	{
		return fun((x*x)%n ,y/2 ,n);
	}
else
	{
		return (x*fun((x*x)%n , (y-1)/2 , n ))%n;
	}
}

int main()
{
	long int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int x,y,n;
		cin>>x>>y>>n;
	long long int ans = fun(x,y,n);
    cout<<ans<<endl;
    }
	
	return 0;
}
