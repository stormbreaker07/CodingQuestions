#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	int num;
	cin>>num;
	for(int i=0;i<n;i++)
	{if(a[i]==num)
		{cout<<i+1;
			break;
		}
	}
	return 0;
}
