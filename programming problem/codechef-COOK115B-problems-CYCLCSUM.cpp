/*
#incliude<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
		
	return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];	
}
int in[n];
for(int i=0;i<n;i++)
{
in[i] = 1;	
}

for(int i=1;i<n;i++)
{
	for(int j=0;j<=i;j++)
	{
			if(a[j]<a[i])
			{
				if(in[i]<in[j]+1)
				{
					in[i] = in[j]+1;
				}
			}
	}
}

for(int i=0;i<n;i++)
{
cout<<in[i]<<" ";	
}	
	
	return 0;
}
