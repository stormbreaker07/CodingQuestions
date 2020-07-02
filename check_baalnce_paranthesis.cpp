#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main()
{string s;
	cin>>s;
	int c=0;
	stack<char> s1;
for(unsigned int i=0;i<s.length();i++)
{if(i==0)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{s1.push(s[i]);
		}
		else if(s[i]==')' || s[i]=='}' || s[i]==']')
		{c=2;
		break;
		}
    }
else
{
	if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{s1.push(s[i]);
		}
	else if(s[i]==')' || s[i]=='}' || s[i]==']')
		{
			if(s[i]==')' && s1.top()=='(')
			{s1.pop();}
	        else if(s[i]=='}' && s1.top()=='{')
			{s1.pop();}
	        else if(s[i]==']' && s1.top()=='[')
			{s1.pop();}
			else
			{c=2;
			break;}
	    }  
}
}
if(c==0)
{cout<<"balanced";}
else if(c==2)
{cout<<"not balanced";}	

		
	return 0;
}
