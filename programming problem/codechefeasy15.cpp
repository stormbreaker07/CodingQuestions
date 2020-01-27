#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{long int n,i;
long long int sum=0,x;
cin>>n;
for(i=0;i<n;i++)
{cin>>x;
	sum+=x;
}
int c=0;
for(i=1;i<=n;i++)
{if(sum>=i)
	{sum=sum-i;
		c=2;}
else if(sum<i)
{c=0;
	break;}
}

if(c==2 && sum==0)
{cout<<"YES"<<endl;}

else
{cout<<"NO"<<endl;}

return 0;
}
