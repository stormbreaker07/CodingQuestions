#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int n,num=0,w;
	cin>>n;
	long int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
		if(a[i]==i)
		{num++;}
	}
	int c=0;
	if(num<n)
	{for(int i=0;i<n;i++)
	{if(a[i]!=i)
		{w=a[a[i]];
			if(w==i)
			{c=2;
				break;
			}
		}
	}
	if(c==2)
	{cout<<num+2;}
	else 
	{cout<<num+1;}
}
else
{cout<<num;}
	return 0;
}
    
