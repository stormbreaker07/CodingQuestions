#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,a;
cin>>n;
set<int,greater<int> > s;
set<int> :: iterator it;
int count = n;
int w[n];
for(int i=0;i<n;i++)
{cin>>w[i];}
for(int i=0;i<n;i++)
{a = w[i];
if(a == count)
{	
cout<<a<<" ";	
count--;
int siz = s.size();
it = s.begin();

for(int j=0;j<siz;j++)
	{
		it = s.begin();
		if(*it == count)
		{cout<<count<<" ";
		s.erase(it);
		count--;
		}
		else 
		{
		break;}
	}
cout<<endl;
}	
else
{
s.insert(a);
cout<<endl;}
}
	
	
	return 0;
}
