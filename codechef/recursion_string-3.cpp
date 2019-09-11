#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
char s[3];
void fun(string c[],int n,int r,int w)
{
if(r<n)
{for(int i=0;i<n;i++)
	{s[w]=c[r][i];
		fun(c,n,r+1,w+1);
	}
}
else
{for(int i=0;i<n;i++)
	{cout<<s[i];}
	cout<<endl;
	return ;
} 
}	


int main()
{string a[10],c[3];
	int b[3];
	for(int i=2;i<=9;i++)
	{cin>>a[i];}
	cin>>b[0]>>b[1]>>b[2];
	for(int j=0;j<3;j++)
	{c[j]=a[b[j]];}
	fun(c,3,0,0);

	
	
	return 0;
}
