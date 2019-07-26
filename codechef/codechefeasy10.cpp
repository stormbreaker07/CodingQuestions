#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;


int main()
{int t;
	cin>>t;
	string s;
string s2="101",s3="010";
	for(int j=0;j<t;j++)
{int c=0;
	cin>>s;
	long int w=s.length();
	if(w>=3)
{for(long int i=0;i<=w-3;i++)
{if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0') || (s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'))
{c=2;
break;
}}
}
else if(w<3)
{c=0;}
if(c==2)
{cout<<"Good"<<endl;}
else
{cout<<"Bad"<<endl;}
s.clear();
}	
return 0;
}
