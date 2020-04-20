#include<bits/stdc++.h>
using namespace std;


int main()
{
int m,n;
cin>>m>>n;
int a[m][n];
int ct[m][n];
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
		ct[i][j] =0;
	}
}

for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		
	if(i==0 && j==0)
	{ct[i][j] = a[i][j];}
	else if(i==0 && j>0)
	{
		ct[i][j] = a[i][j] + ct[i][j-1];
	} 
	else if(j==0 && i>0)
 	{
		ct[i][j] = a[i][j] + ct[i][j];
	}
 	else
 	{
		 ct[i][j] = a[i][j] + min(ct[i-1][j],ct[i][j-1]);
    }
	}
}

/*
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<ct[i][j]<<" ";
	}
	cout<<endl;
}
*/
	
cout<<ct[m][n];	
	
	
	return 0;
}
