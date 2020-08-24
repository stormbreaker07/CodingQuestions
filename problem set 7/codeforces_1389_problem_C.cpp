#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int a[10] = {0};
	for(unsigned int i=0;i<s.length() ;i++)
	{
		a[s[i] - '0']++;
	}	
	sort(a ,a+10);
	int cont=1;
	for(unsigned int i=1;i<10;i++)
	{
		if(a[i]!=a[i-1])
		{
			cont++;
		}
	}
	if(cont>2)
	{
		cout<<s.length() - a[9]<<endl;
	}
	else if(cont==1)
	{
		cout<<0<<endl;
	}
	else if(cont==2)
	{
		int flag=1;
	//even length()`	
	if(s.length()%2==0)
		{
			string s1 = s.substr(0, 1);
		for(unsigned int i=0;i<s.length();i+=2) 
		{
			if(s1[0] == s[i] && s1[1] == s[i+1])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<s.length()-a[0]<<endl;
	}
	
	
	
	
	}
		
		
		
	}
	
	
	return 0;
}
