#include <bits/stdc++.h>
using namespace std;

int main()
{long int a,b,c,i,j=0;
	cin>>a>>b>>c;
	string s,s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(i=0;i<b;i++)
	{if(int(s1[i])<=int(s2[i]) &&  int(s2[i])<=int(s3[i]))
		{j=i;}
	}
	s=s1;
	for(i=0;i<j;i++)
	{s+=s2[i];}
	s+=s3;	
	cout<<s;
	
	
	return 0;
}

