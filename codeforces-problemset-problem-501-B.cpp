#include <bits/stdc++.h>
using namespace std;

vector<string> s1;
vector<string> s2;

int main()
{
int n,c=0;
string a,b;
cin>>n;
for(int i=0;i<n;i++)
{cin>>a>>b;
if(i==0)
{s1.push_back(a);
s2.push_back(b);
}
else
{c=0;
int j;	
for(j=0;j<s2.size();j++)
{
	if(a == s2[j])
	{c=1;
	break;}
}
if(c==1)
{s2[j] = b;}
else if(c==0)
{s1.push_back(a);
s2.push_back(b);}
}
}
cout<<s1.size()<<endl;
for(int i=0;i<s1.size();i++)
{cout<<s1[i]<<" "<<s2[i]<<endl;}	
	
	return 0;
}
