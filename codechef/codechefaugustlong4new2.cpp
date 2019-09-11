#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{int j,q;
		string s;
		cin>>s;
		
		q=count(s.begin(),s.end(),'1');
	
	if(q==s.length())
	{if(q%2==0)
		{cout<<"LOSE"<<endl;}
		else if(q%2!=0)
		{cout<<"WIN"<<endl;}
	}
	else if(q==1)
	{cout<<"WIN"<<endl;}
	else if(q==0)
	{cout<<"LOSE"<<endl;}
        else
		{for(int k=0;k<s.length();k++)
		{j=s.find('1');
		if(j==-1)
		{break;}
		else
		{s[j]='3';
				if(s[j-1]!='3')
				{if(s[j-1]=='1')
					{s[j-1]='0';}
					else if(s[j-1]=='0')
					{s[j-1]='1';}
				}
	
				if(s[j+1]!='3')
				{if(s[j+1]=='1')
					{s[j+1]='0';}
					else if(s[j+1]=='0')
					{s[j+1]='1';}
				}
				
			}
		}
		j=s.find('0');
		if(j!=-1)
		{cout<<"LOSE"<<endl;}
		else if(j==-1)
		{cout<<"WIN"<<endl;}
		}
	
	}
	return 0;
}
