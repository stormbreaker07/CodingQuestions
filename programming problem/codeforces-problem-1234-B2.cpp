#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
int n,m,c=0;
cin>>n>>m;
deque<long int> q;
set<int> st;
long int w;
int pre,pst;
int count=0;
for(int i=0;i<n;i++)
{cin>>w;
pre = st.size();
st.insert(w);
pst = st.size();
if(i!=0)
{if(pre<pst)
{c=1;}
else
{c=0;}
}
else
{c=1;}

	
if(count<m)
{
if(c==1)	
{q.push_back(w);
count++;	
}
}		
else if((count == m) && (c==1))
{
st.erase(q.front());	
q.pop_front();
count--;

if(c==1)
{q.push_back(w);

count++;
}
}
}
cout<<q.size()<<endl;
while(!q.empty())
{cout<<q.back()<<" ";
	q.pop_back();
}
	return 0;
}

