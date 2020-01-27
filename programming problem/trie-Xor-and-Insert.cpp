#include<bits/stdc++.h>
using namespace std;

int main()
{
int q;
cin>>q;
set<long int> s;
set<long int> :: iterator it;
int zero = 0;
s.insert(zero);		

int num;
long int x,y;
for(int i=0;i<q;i++)
{
cin>>num;
if(num == 3)
{it = s.begin();
cout<<*it<<endl;}
if(num == 1)
{cin>>x;
s.insert(x);		
}	
if(num == 2)
{cin>>x;
for(it = s.begin();it!=s.end();it++)
{y = *it^x;
s.erase(*it);
s.insert(y);
}}
}	
	
	
return 0;
}
