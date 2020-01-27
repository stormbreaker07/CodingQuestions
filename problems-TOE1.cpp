#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
	long int n,i;
	cin>>n;
	string s1,s2,s3,s4,s5,s6,s7,s8,new1,a2,a3;
	s1=".........";
	s2="X........";
	s3="X.O......";
	s4="X.O.....X";
	s5="X.O.O...X";
	s6="X.O.O.X.X";
	s7="X.OOO.X.X";
	s8="X.OOO.XXX";
	for(i=0;i<n;i++)
	{cin>>new1>>a2>>a3;
		new1=new1+a2+a3;
	if(new1==s8 || new1==s7 || new1==s6 || new1==s5 || new1==s4 || new1==s3 || new1==s2 || new1==s1 )
	{cout<<"yes"<<endl;}
	else
	{cout<<"no"<<endl;}	
	}
	
	return 0;
}
