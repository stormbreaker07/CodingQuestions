/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length(); 
	int a[2] ={0};
	
	

	for(int i=0;i<n;i++)
	{
	
		
		if(s[i] == 'A' && a[0]!=1)
		{
			if(s[i+1] == 'B')
			{
				if(s[i+2] == 'A')
				{
					if(s[i+3] == 'B')
					{
						a[0]=1;
						i=i+1;
					}
					
				}
				else
				{
					a[0]=1;
					i = i+1;
				}
				
			}
			
		}
		
		if(s[i] == 'B' && a[1]!=1)
		{
			if(s[i+1] == 'A')
			{
				if(s[i+2] == 'B')
				{
					if(s[i+3] == 'A')
					{
						a[1]=1;
						i=i+1;
					}
					
				}
				else
				{
					a[1]=1;
					i = i+1;
				}
			}
		}
	

	}


	if(a[0]==1 && a[1]==1)
		{cout<<"YES";}
		else
		{cout<<"NO";}
	
	return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length(); 
	int count1=0,count2=0;
	int a1[n]={0};
	int a2[n]={0};
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
			if(s[i+1]=='B')
			{
				a1[i]=1;
				a1[i+1]=1;
				count1++;
			}
		}
		if(s[i]=='B')
		{
			if(s[i+1]=='A')
			{
				a2[i]=1;
				a2[i+1]=1;
				count2++;
			}
		}
		
	}
	int c=0;
	if( count1>1 && count2>1 )
	{
		cout<<"YES";
	}
	else if(count1>1 && count2==1)
	{
		for(int i=0;i<n;i++)
		{
			if(a1[i]!=0 && a2[i]!=0)
			{
				a1[i]=0;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			if(a1[i]==1 && a1[i+1]==1)
			{	
				c=1;
				break;
			}
	    }
	    if(c==1)
	    {cout<<"YES";}
	    else
	    {cout<<"NO";}
	    
	}
	else if(count1==1 && count2>1)
	{
		for(int i=0;i<n;i++)
		{
			if(a1[i]!=0 && a2[i]!=0)
			{
				a2[i]=0;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			if(a2[i]==1 && a2[i+1]==1)
			{	
				c=1;
				break;
			}
	    }
	    if(c==1)
	    {cout<<"YES";}
	    else
	    {cout<<"NO";}
	    
	}
	else if(count1==0 || count2==0)
	{
		cout<<"NO";
	}
	else if(count1 == 1 || count2==1)
	{c=0;
		for(int i=0;i<n;i++)
		{
			if(a1[i]!=0 && a2[i]!=0)
			{c=1;
				break;
			}
		}
		if(c==1)
		{cout<<"NO";}
		else
		{cout<<"YES";}
	}
		
		
	
	
	return 0;
}
