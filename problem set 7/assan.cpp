#include<bits/stdc++.h>
using namespace std;

#define L long long 

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		int w,cont=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(i!=j)
				{
				w = a[i]&a[j];
				if(w==a[i])
				{
					cont++;
				}
				}
			}
		}
		cout<<cont<<endl;
		
	}
	
	
	
	return 0;
	}
