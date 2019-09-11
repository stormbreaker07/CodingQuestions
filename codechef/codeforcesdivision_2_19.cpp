#include <bits/stdc++.h> 
#include<iostream>
#include<map>
using namespace std;
  
int main()
{int n;
	cin>>n;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<n+1;i++)
	{cin>>a[i];}
	long int power=0,w=0;
	for(int i=0;i<n;i++)
	{power+=a[i]-a[i+1];
		if(power<0)
		{w+=0-power;
			power=0;
		}
	}
	cout<<w;
	return 0;
}
