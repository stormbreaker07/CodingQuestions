#include <bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{char x;
cin>>n;
string s1,s2,s;
cin>>s;
int curr[150]={0};
for(int j=0;j<n;j++)
{	
	x=s[j];
	if(curr[int(x)]==1)
	{
		s2=s2+x;	
	}
	else if(curr[int(x)]==0)
	{
		curr[int(x)]=1;
		s1=s1+x;	
	}
}
int count=0;
for(int j=0;j<s2.length();j++)
{
	for(int k=0;k<s1.length();k++)
	{
		if(s2[j] == s1[k])
		{count++;
			s1.erase(0,k);
		break;
		}
	}
}
cout<<count<<endl;
}

return 0;
}
