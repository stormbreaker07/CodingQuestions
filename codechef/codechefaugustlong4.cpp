#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t,num;
	cin>>t;
	for(int i=0;i<t;i++)
	{string s;
		cin>>s;
		num=0;
		long int q;
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
	{for(long int k=0;k<s.length();k++)
	{
		for(long int j=0;j<s.length();j++)
		{if(s[j]=='1')
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
		num=s.find('0');
		if(num==-1)
		{break;}	
	}
    
		
		if(num==-1)
		{cout<<"WIN"<<endl;}
		else
		{ cout<<"LOSE"<<endl;}
    }
		}
	return 0;
}	
				
