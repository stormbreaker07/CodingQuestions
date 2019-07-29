#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int w=0;
int fun(string s,int first,int last,int count)
{
	if(first<last)
	{if(s[first]==s[last])
		{count++;}
			first++;
			last--;
	fun(s,first,last,count);
	 if(count>w)
	 {w=count;}
	 }
	 else if(first>=last)
	 {return w;}
 }
	
	


int main()
{string s;
	cin>>s;
	int l=s.length()-1;
	int f=0;
	int c=0;
	int x=fun(s,f,l,c);
cout<<x;
return 0;
}
	
