#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	string s,p;
	while(t--)
	{
		cin>>s>>p;
		int a[26] = {0};
		for(unsigned int i=0;i<s.length();i++)
		{
			a[int(s[i])-97]++;
		}
		for(unsigned int i=0;i<p.length();i++)
		{
			a[int(p[i]-97)]--;
		}

int x = int(p[0])-97;
int num;
int Pprint=0;
if(int(p[0]) > int(p[1]))
{
	Pprint = 1;
}
else if(int(p[0]) < int(p[1]))
{
	Pprint=0;
}
else if(int(p[0]) == int(p[1]))
{
	for(int i=0;i<p.length()-1;i++)
	{
		if(int(p[i])!=int(p[i+1]))
		{
			if(int(p[i]) > int(p[i+1]))
			{Pprint=1;}
			else
			{
				Pprint=0;
			}
			if(a[x]<i+1)
			{ 
				Pprint=0;
			}
			break;
		}
	}
	
}


string s1;
if(Pprint==1)
{
for(int i=0;i<26;i++)
{
	if( i == x)
	{
		cout<<p;
		for(int j=1;j<=a[i];j++)
			{
				num = i+97;
				cout<<(char)num;
			}
	}
	else
	{	for(int j=0;j<a[i];j++)
		{
		num = i+97;
		cout<<(char)num;
		}
	}
}
}
else if(Pprint == 0)
{
for(int i=0;i<26;i++)
{
	if(i == x)
		{
			for(int j=1;j<=a[i];j++)
			{
				num = i+97;
				cout<<(char)num;
			}
			cout<<p;
		}
		else
		{
			for(int j=0;j<a[i];j++)
			{
				num = i+97;
				cout<<(char)num;
			}
		}
}
	
}
cout<<endl;

}	
	

return 0;
}
