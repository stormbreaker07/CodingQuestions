#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

string key="qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{int index;
	char c;
	cin>>c;
	string input;
	cin>>input;
if(c=='L')
{
	for(unsigned int i=0;i<input.length();i++)
	{
		index=key.find(input[i]);
		cout<<key[index+1];
	}
}
else if(c=='R')
{
	for(unsigned int i=0;i<input.length();i++)
	{
		index=key.find(input[i]);
		cout<<key[index-1];
	}
}

	
return 0;
}
