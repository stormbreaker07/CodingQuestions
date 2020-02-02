#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
int n,s,c=0;
cin>>n>>s;	
int a[n+1],b[n+1];
for(int i=1;i<=n;i++)
{cin>>a[i];}
for(int i=1;i<=n;i++)
{cin>>b[i];}
if(a[1] == 0)
{cout<<"NO";}
else if(a[1] == 1)
{if(a[s] == 1)
{cout<<"YES";}
else if(a[s] == 0)
{
	for(int i=s+1;i<=n;i++)
	{if(a[i]==1 && b[i] == 1)
		{c=1;
		 if(b[s]==1)
			{cout<<"YES";}
		 else if(b[s]==0)`
			{cout<<"NO";}
		break;
		}
			
	}
	if(c==0)
	{cout<<"NO";}	
}	
}	
return 0;
}
