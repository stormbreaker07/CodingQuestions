#include<bits/stdc++.h>
using namespace std;

long long int fact(long int x)
{long long count=0;	
for(long int i=x;i>=0;i--)
{
count= count+i;
}
return count;
}


int main()
{
int n;
cin>>n;
long long int x,y,count=0;

multimap<long long int,long long int,greater<long long int> > mp;
multimap<long long int,long long int> :: iterator it1,it2;
for(int i=0;i<n;i++)
{cin>>x>>y;
mp.insert(make_pair(x,y));	
}
it2=mp.begin();
it2++;
for(it1=mp.begin();it2!=mp.end();it1++)
{if(it1->first == it2->first || it1->second == it2->second)
{cout<<it1->first<<" "<<it1->second<<endl;
		count++;
}
it2++;
}
cout<<count;

return 0;
}


/*
int main()
{
int n;
cin>>n;
long long int x,y;
set<long long int> s1;
set<long long int> s2;

long int count=0;
set<long long int> :: iterator it1,it2,end1,end2;
for(int i=0;i<n;i++)
{cin>>x>>y;
if(i>0)	
{it1 = find(s1.begin(),s1.end(),x);
it2 = find(s2.begin(),s2.end(),y);

if(it1!=s1.end() && it2!=s2.end())
{
count++;
}
}
s1.insert(x);	
s2.insert(y);	
}
cout<<count<<endl;
count = fact(count);
long int m1 = fact(n-s1.size());
long int m2 = fact(n-s2.size());
cout<<m1<<" "<<m2<<endl;
m1=m1+m2-count;
cout<<m1;
	
	return 0;
} 
	
*/
