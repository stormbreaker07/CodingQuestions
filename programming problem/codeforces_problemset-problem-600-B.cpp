#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
long int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];}	
sort(a,a+n);	

int w,ans;
for(int i=0;i<m;i++)
{cin>>w;
ans = upper_bound(a,a+n,w)-a;
cout<<ans<<" ";
}
	return 0;
}

