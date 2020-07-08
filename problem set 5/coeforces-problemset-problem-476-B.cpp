
#include<bits/stdc++.h>
using namespace std;


//big idea
int fun(int n,int h) {
	if(n)
		return fun(n-1,h+1)+fun(n-1,h-1);
	else if(h==0) return 1;
	else return 0;
}
 


int main()
{
	string s1,s2;
	cin>>s1>>s2;
	//for first string
	int x1=0,x2=0,y1=0,y2=0,nw=0;
	
	for(unsigned int i=0;i<s1.length();i++)
	{if(s1[i] == '+')
		{x1++;}
		else if(s1[i] == '-')
		{y1++;}
	}
	
	//for second string 
	for(unsigned int i=0;i<s2.length();i++)
	{if(s2[i] == '+')
		{x2++;}
		else if(s2[i] == '-')
		{y2++;}
		else if(s2[i] == '?')
		{nw++;}
	}

	int m1=x1-x2;
	int m2=y1-y2;
	
	if(nw==0)
	{
		if(m1 ==0 && m2==0)
		{cout<<"1.000000000000";}
		else
		{cout<<"0.000000000000";}
	}
	else 
	{
		double total = (pow(2,nw));
		if(m1<0 || m2<0)
		{cout<<"0.000000000000";}
		else if(m1 == 0 || m2==0)
		{
			cout<<fixed<<setprecision(12)<<double(1/total);
		}
		else
		{	int c1 = fun(nw,m1-m2);
			cout<<fixed<<setprecision(12)<<double(c1/total);	
		}
		
	}
	
	
	
	
	
	return 0;
}
