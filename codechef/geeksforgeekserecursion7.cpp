/*Print all increasing sequences of length k from first n natural numbers*/
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int w=0,i,k; 
void fun(int s[],int r,int a[],int pos)
{
	if(pos<r)
	{ for(int i=0;i<k;i++)
		{a[pos]=s[i];
		fun(s,r,a,pos+1);	
		}
	}
	else
	{w=0;
	for(int j=0;j<r-1;j++)
	{if(a[j]>=a[j+1])
	{w=3; break;}
	 }
	 
	if(w==0)
	{
		for(int j=0;j<r;j++)
	   {cout<<a[j];}
		cout<<endl;}
		return ;}
}
int main()
{	int n;
	cin>>n>>k;
	int s[k];
	for(int i=0;i<k;i++)
	{s[i]=i+1;}
	
	int a[n];
	fun(s,n,a,0);
	return 0;
}

