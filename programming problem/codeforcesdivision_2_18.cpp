#include <bits/stdc++.h> 
#include<iostream>
#include<map>
using namespace std;
  
int main()
{
	int n,w=0,power=0;
	cin>>n;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<n+1;i++)
	{cin>>a[i];}

	for(int i=0;i<n;i++)
	{if(a[i]>=a[i+1])
		{power+=a[i]-a[i+1];}
		else if(a[i]<a[i+1])
		{if(power>=a[i+1]-a[i])
			{power+=a[i]-a[i+1];}
			else if(power<a[i+1])
			{w+=a[i+1]-a[i];
			}
		}
	cout<<w<<" "<<power<<endl;
	}
	
		cout<<w;
	return 0;
}
	
