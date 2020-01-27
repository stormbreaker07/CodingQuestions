#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{string s;
deque<char> d;
cin>>s;
	d.push_back(s[2]);
	if(s[1]=='>')
	{d.push_back(s[0]);}
	else if(s[1]=='<')
	{d.push_front(s[0]);}
	
cin>>s;
	int c=0;
	char w1=s[0];
	for(int i=0;i<3;i++)
	{if(w1==d[i])
		{c++;}
	}
	if(c>0)
	{if(s[1]=='>')
		{d.push_front(s[2]);}
	if(s[1]=='<')
	    {d.push_back(s[2]);}
	}
	if(c==0)
	{if(s[1]=='<')
		{d.push_front(s[0]);}
	if(s[1]=='>')
	   {d.push_back(s[0]);}
    }
    cin>>s;
 w1=s[0];
char w2=s[2];
int num1=0,num2=0;
for(int i=0;i<3;i++)
{if(w1==d[i])
	{num1=i;}
	else if(w2==d[i])
	{num2=i;}
}int m=0;
if(s[1]=='>')
{if(num2>num1 && abs(num1-num2)==1)
	{swap(d[num2],d[num1]);
	}
	else if(num2>num1 && abs(num1-num2)==2)
	{m=2;}
	}
	
if(s[1]=='<')
{if(num1>num2 && abs(num1-num2)==1)
	{swap(d[num2],d[num1]);
	}
	else if(num1>num2 && abs(num1-num2)==2)
	{m=2;}
}
if(m==2)
{cout<<"Impossible";}
else if(m==0)
{cout<<d[0]<<d[1]<<d[2];}

return 0;
}	
	
	
	
	
	
	
