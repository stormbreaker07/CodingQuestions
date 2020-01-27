#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{int c=0;
		vector <int> a;
		vector <int> b;
		vector <int> w;
		string s;
		cin>>s;
	for(int j=0;j<s.length();j++)
	{if(s[j]==s[j+1] && s[j]=='1' && j<(s.length()-1))
		{c++;}
		else
		{if(c>1)
			{a.push_back(c);}
			c=1;
		}
		if(s[j]=='1')
		{b.push_back(j+1);}
	}
	for(int j=0;j<a.size();j++)
	{cout<<a[j]<<" ";}
	cout<<endl;
	
	int d;
	for(int j=1;j<b.size();j++)
	{	d=b[j]-b[j-1];
		if(d>0)
		{w.push_back(d-1);}
	}
	for(int j=0;j<w.size();j++)
	{cout<<w[j]<<" ";}
	
}

	return 0;
}
