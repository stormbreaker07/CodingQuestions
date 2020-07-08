/*Print all possible combinations of r elements in a given array of size n*/
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int w=0,i; 
void fun(string s,int r,char a[],int pos)
{
	if(pos<r)
	{ for(int i=0;i<s.length();i++)
		{a[pos]=s[i];
		fun(s,r,a,pos+1);	
		}
	}
	else
	{for(int j=0;j<r;j++)
		{cout<<a[j];}
		cout<<endl;
		return ;}
}
int main()
{string s;
	cin>>s;
	int n;
	cin>>n;
	char a[n];
	fun(s,n,a,0);
	return 0;
}
