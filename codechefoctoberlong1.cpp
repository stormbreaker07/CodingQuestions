#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
	int a[n];
		int max=1000,count=0;
		for(int j=0;j<n;j++)
		{cin>>a[j];
		if(j<=5)
		{if(a[j]<max)
			{count++;
				max=a[j];
			}	
		}}
	   for(int j=6;j<n;j++) 
	   {max=1000;
		for(int k=j-5;k<j;k++)
		   {if(max>a[k])
			   {max=a[k];}
			}
		if(a[j]<max)
		{count++;}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
