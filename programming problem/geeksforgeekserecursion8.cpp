#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int w;
bool t=true;
int fun(string s,int len,int m)
{
if(t==true)
{if(m<len)
{
w=((s[m]-'0')+w)*10;

m++;
fun(s,len,m);
}
else if(m==len)
{t=false;
return w;}
}
return w/10;
}

int main()
{string s;
	cin>>s;
	int len=s.length();
	int k=fun(s,len,0);
	cout<<k;
	return 0;
}
