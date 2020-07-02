#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int w=0;
char c[1000][1000]; 

void fun(char a[],int r,int num,char b[])
{
   if(num<r)
	{for(int i=0;i<r;i++)
		{b[num]=a[i];
			fun(a,r,num+1,b);
		}
	}
	else 
	{
		for(int i=0;i<r;i++)
		{c[w][i]=b[i];}
	w++;
		return ;
	}
}


int main()
{int n;
	cin>>n;
 char a[n];
 for(int i=0;i<n;i++)
 {cin>>a[i];}
 char b[n];
 fun(a,n,0,b);
 for(int i=0;i<pow(n,n);i++)
 {for(int j=0;j<n;j++)
	 {cout<<c[i][j];}
	 cout<<endl;
 }
 return 0;
}
