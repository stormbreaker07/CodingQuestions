#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{int x,y,m=0,mx=0,mwx=0;
	char c;
	char w='.';
	cin>>x>>y>>c;
	string s;
	char a[x][y];
	for(int i=0;i<x;i++)
	{
	  for(int j=0;j<y;j++)
		{cin>>a[i][j];}
	}
	if(x==1 && y==1)
    {mwx=0;}
	else
	{for(int i=0;i<x;i++)
	{
	  for(int j=0;j<y;j++)
		{mx=0;
			if(a[i][j]==c)
			{
			if(i<x-1 && a[i+1][j]!=c &&  a[i+1][j]!=w)
			{cout<<1;
			 s=s+a[i+1][j];}
			if(j<y-1 && a[i][j+1]!=c && a[i][j+1]!=w)
			{cout<<2; s=s+a[i][j+1];}
			if(j>0 && a[i][j-1]!=c && a[i][j-1]!=w)
			{cout<<3; s=s+a[i][j-1];}
			if(i>0 && a[i-1][j]!=c && a[i-1][j]!=w)
			{cout<<4; s=s+a[i-1][j];}
			}	
			if(s.length()>1)
			{
				for(int k=0;k<s.length();k++)
				{
				for(int l=0;l<s.length();l++)
				{if(s[k]==s[l])
					{m++;}
				}
				if(m==1)
				{mx++;}
				m=0;
				}
		    }
		    else if(s.length()==1)
		    {mx=1;}
		    else if(s.length()==0)
		    {mx=0;}
		    if(mx>mwx)
		    {mwx=mx;}
	     cout<<s<<endl<<mx<<endl;
	     s.clear();
		}
	}
    }
	cout<<mwx;
	return 0;
}
