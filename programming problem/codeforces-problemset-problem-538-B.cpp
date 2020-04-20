#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	vector<int> v;
	for(int j=0;j<100000;j++)
	{
		for(int i=0;i<s.length();i++)
		{
				if(s[i]-'0'>=1)
				{
					s1 = s1+'1';
				}
				else if(s[i]-'0' == 0)
				{
					s1  = s1+'0';
				}
		}
		
		//converting string s and s1 in to integer
		int x = stoi(s);
	    int y = stoi(s1); 
		v.push_back(y);

		  x = x-y;
		  if(x==0)
		  {break;}
		  s.clear();
		  s1.clear();
		  s = to_string(x);
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
	cout<<v[i]<<" ";    
	}
	
	return 0;
}
