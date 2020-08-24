#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define l long long int 
int day[1000000] = {0};



void bfs(vector<l> ad[] ,int *main_visited ,int visit[] , int w , l a[] , l *b , int ml)
{
	
int p;
long long int value;
 queue<int> q;
q.push(w);
visit[w] = 1;
	if(b[w]>0)
  {
	  value = min(a[w] , b[w]);
	b[w] -= value;
	if(b[w] == 0)
	{
		day[w] = ml;
	}
  }
  
while(!q.empty())
{
	p=q.front();
q.pop();
for(unsigned int i=0;i<ad[p].size();i++)
{if(visit[ad[p][i]] == 0 and main_visited[ad[p][i]]==0)
 {
	 //reduce b[ad[p]] to min(a[ad[p]] , b[ad[p]]);
	 //if reduced to  zero date[ad[i]] = i+1 
  if(b[ad[p][i]]>0)
  {
    value = min(a[ad[p][i]] , b[ad[p][i]]);
	b[ad[p][i]] -= value;
	if(b[ad[p][i]] == 0)
	{
		day[ad[p][i]] = ml;
	}
  }
  
  q.push(ad[p][i]);
  visit[ad[p][i]]=1; 
 }
 }
 }
 
 //update it so that cant visit it any other time
  main_visited[w] = 1;
 	
	
	return ;
}






int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<l> v[n+1];
		int x,y;
		for(int i=1;i<n;i++)
		{
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int p[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		long long int a[n+1],b[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		int main_visited[n+1] = {0};
		int visited[n+1] = {0};
		fill(day , day+1000000 ,  0);
		for(int i=1;i<=n;i++)
		{
			bfs(v , main_visited , visited , p[i] , a , b , i);
		}
		
		for(int i=1;i<=n;i++) {
			if(day[i]==0)
			{cout<<-1<<" ";}
			else
			{cout<<day[i]<<" ";}
		}
		cout<<endl;
		
	}
	
	
	
	
	return 0;
	}
