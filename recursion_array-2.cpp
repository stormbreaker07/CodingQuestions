#include <bits/stdc++.h> 
#include<iostream>
using namespace std;



void fun(int a[],int n,int k,int r,int s[],int j)

{if(r<k)
	
	{
		for(int i=j;i<n;i++)
		{
			s[r]=a[i];
			fun(a,n,k,r+1,s,i+1);
		}
	}
else 
	{for(int i=0;i<k;i++)
		{cout<<s[i];}
		cout<<endl;
		return ;
	}
}



int main()
{int n,k;
	cin>>n>>k;
	int a[n],s[k];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	fun(a,n,k,0,s,0);
	return 0;
}
