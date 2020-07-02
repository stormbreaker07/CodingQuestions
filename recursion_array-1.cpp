#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

bool flag=true;
void fun(int num,int s[],int w,int r)
{if(r<w && flag==true)
	{cout<<num/s[r]<<endl;
		fun(num,s,w,r+1);}
		else 
		{flag=false;
			return ;
		}
}

int main()
{int n,product=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
		product=a[i]*product;}
	fun(product,a,n,0);
	
	return 0;
}

