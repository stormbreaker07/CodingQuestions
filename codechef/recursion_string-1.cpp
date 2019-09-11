#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
bool t=true;
void fun(string s,int len,char a[],int n)
{if(t==true)
	{
		if(n<len)
	    {a[n]=s[len-1-n];
			fun(s,len,a,n+1);}
     }
	else if(n==len)
	{t=false;
		return ;}
}


int main()
{string s;
	getline(cin,s);
	char a[s.length()];
	fun(s,s.length(),a,0);	
    for(int i=0;i<s.length();i++)
    {cout<<a[i];}
	return 0;
}
