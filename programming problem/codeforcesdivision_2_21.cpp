#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{string s1="ROYG";
string s2="BIV";	
string s3;	
	int n;
	cin>>n;
	n=n-3;
	int num1=n/4;
	int num2=n%4;
	for(int i=0;i<num1;i++)
	{s3=s3+s1;}
	for(int i=0;i<num2;i++)
	{s3=s3+s1[i];}
	s3=s3+s2;
	cout<<s3;
	
	
	
	
	return 0;
}


