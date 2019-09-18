#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int m,s,c=0;
	cin>>m>>s;
	int a[m]={0};
	float noo=float(s)/float(m);
	
	if(ceil(noo)<10)
	{
		if(s<10 && s!=0 && m>1)
	{a[0]=1;
		a[m-1]=s-1;
	for(int i=0;i<m;i++)
	{cout<<a[i];}
	cout<<" ";
	cout<<s;
	for(int i=1;i<m;i++)
	{cout<<"0";}
	}
	else if(s<10 && s!=0 && m==1)
	{cout<<s<<" "<<s;}
	else if(s==0 && m!=1)
	{cout<<"-1 -1";}
	else if(s==0 && m==1)
	{cout<<"0 0";}
	else if(s>=10)
	{
		for(int i=0;i<m;i++)
		{if(s>9)
			{a[i]=9;
			s=s-9;}
			else if(s<10)
			{a[i]=s;
				s=0;
				c=i;
		break;
			}
		}
	}
	if(c!=0)
	{if(c!=m-1)
		{cout<<1;
			a[c]=a[c];
		for(int i=1;i<m-c-1;i++)
		{cout<<"0";
		}
		cout<<a[c]-1;
		for(int i=c-1;i>=0;i--)
		{cout<<a[i];}
		}
		else if(c==m-1)
		{for(int i=c;i>=0;i--)
			{cout<<a[i];}
		}
		cout<<" ";
		for(int i=0;i<m;i++)
		{cout<<a[i];}
	}
}
else 
{cout<<"-1 -1";}
	return 0;
}
			
			
		
	
