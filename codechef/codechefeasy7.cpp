#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;


int main()
{int t,c=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{string s1,s2;
	cin>>s1;
	cin>>s2;
	int a[124]={0};
	for(int j=0;j<s1.length();j++)
	{a[int(s1[j])]=1;}
	for(int j=0;j<s2.length();j++)
	{if(a[int(s2[j])]==1)
		{c++;} }
    cout<<c<<endl;
    c=0;
    }
	
	return 0;
}

