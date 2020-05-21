#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
queue<long int> q;
long int w;
long int max_size = (int)(pow(10,9));
int *k = new int[max_size];
int count=0;
for(int i=0;i<n;i++)
{cin>>w;
	
	if(count == m && k[w]!=23)
	{	k[q.back()]=0;
	q.pop();
	count--;
	}
		
	if(count<m && k[w]!=23)
	{cout<<w<<endl;
		q.push(w);
	k[w] = 23;
	count++;
	}
}
cout<<count<<endl;
string s;
for(unsigned int i=0;i<q.size();i++)
{ ostringstream str1; 
  
    str1 << q.back(); 
  
    string s2 = str1.str(); 
  cout<<"s2";
	
	s=s+s2;
q.pop();
}


	
	return 0;
}

