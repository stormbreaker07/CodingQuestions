#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


#define l long long int 

int main() {
	

	lt;
	cin>>t;
	l n,k;
	while(t--) {
	cin>>n>>k;
	l a[n];
	l ind[101] = {0};
	for(l i=0;i<n;i++) {
		cin>>a[i];
		
		}
	l cont = k;
	vector<l> v;
	v.push_back(0);
	for( l i =0 ;i<n;i++) 
	{
		if(ind[a[i]] ==0)
		{
			ind[a[i]]++;
		}
		else
		{
			
			v.push_back(i);
			fill(ind, ind+101, 0);
			ind[a[i]] = 1;
		}
	}
	for(l i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
		}
		cout<<endl;
	//size ==2
fill(ind, ind+101, 0);
		if(v.size()>=2)
		{
	for(int i=0;i<v[1];i++)
	{
		ind[a[i]]++;
	}
	cout<<1<<" "<<cont<<endl;
	if(v.size()>2)
	{
		for(unsigned int i=2;i<v.size();i++) {
	int temp=0;

		for(int j=v[i-1];j<v[i];j++)
		{
			if(ind[a[j]] > 0)
			{
				if(ind[a[j]]==1)
				{
					temp += 2;
					ind[a[j]]++;
				}
				else
				{
					temp +=1;
					ind[a[j]]++;
				}
			}
			else if(ind[a[j]]==0)
			{
				ind[a[j]]++;
			}
		}
		
		if(temp<=k)
		{
			cont+=temp;
		}
		else
		{
			cont+=k;
			fill(ind ,ind+101,0);
			for(int j=v[i-1];j<v[i];j++)
			{
				ind[a[j]]++;
			}
		}
		cout<<"2end"<<" "<<cont<<endl;
	
	}
	}
	for(int i=0;i<10;i++)
	{
		cout<<ind[i]<<" ";
	}
	cout<<endl;
	
	int temp=0;
	if(v[v.size()-1] == n-1)
	{
		if(ind[a[v[v.size()-1]]] > 0)
		{cout<<a[v.size()-1]<<" "<<ind[a[v[v.size()-1]]]<<endl;
			if(ind[a[v[v.size()-1]]] ==1)
			{
				temp=2;
			}
			else
			{
				temp=1;
			}
		}
		if(temp<=k)
		{
			cont+=temp;
		}
		else
		{
			cont+=k;
		}
	cout<<3<<" "<<cont<<endl;
	}
	else if(v[v.size()-1]<n-1)
	{
		for(int j=v[v.size()-1];j<n;j++)
		{
			if(ind[a[j]]!=0)
			{
				if(ind[a[j]]==1)
				{
					temp += 2;
					ind[a[j]]++;
				}
				else
				{
					temp +=1;
					ind[a[j]]++;
				}
			}
			else if(ind[a[j]]==0)
			{
				ind[a[j]]++;
			}
		}
		if(temp<=k)
		{
			cont+=temp;
		}
		else
		{
			cont+=k;
		}
	}
	cout<<cont<<endl;
	}
	//size == 1
	else if(v.size()==1)
	{
		cout<<k<<endl;
	}
	
		

	}
	
		
		
	
	
	
	return 0;
	}
