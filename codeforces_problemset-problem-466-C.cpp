#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n],sum[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
if(i==0)
{
	sum[i] = a[i];
}	
else
{sum[i] = sum[i-1]+a[i];
}	
}

int count =0;

int ind1=-1,ind2=-1,ind3=-1;

if(sum[n-1]%3==0)
{
for(int i=0;i<n;i++)
{
	if(sum[i] == sum[n-1]/3)
	{
		ind1=i;
		break;
	}
}

for(int i=ind1+1;i<n;i++)
{
	if(sum[i] == (2*sum[n-1])/3)
	{
		ind2=i;
		break;
	}
}

for(int i=ind2+1;i<n;i++)
{
	if(sum[i] == sum[n-1])
	{
		ind3=i;
		break;
	}
}

if(ind1!=-1 && ind2!=-1 && ind3!=-1)
{count = ind3-ind2;}
}

//output the way to make arrangement 
cout<<endl<<count;
	
	return 0;
}
