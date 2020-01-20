#include<bits/stdc++.h>
using namespace std;

int main()
{
	
int n,c,count=0,w=0;
long int t,num;
cin>>n>>t>>c;
for(int	i=0;i<n;i++)
{
cin>>num;
if(num<=t)
{count++;}
else 
{if(count>=c)
{w+=count-c+1;}
count=0;
}
}
if(count>=c)
{w+=count-c+1;}
cout<<w;
	
	return 0;
}
