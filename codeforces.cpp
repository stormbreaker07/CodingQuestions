/*
#include <bits/stdc++.h>
using namespace std;

int main()
{ 
	int n,x;	
	cin>>n;
	vector<long int> a[3];
	vector<long int> :: iterator it;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<n-i;j++)	
		{cin>>x;
		 a[i].push_back(x); 
		}
	}
	int i=1;
		for(int j=0;j<n-i;j++)	
		{	x=a[i][j];
			if(i>0)
			{
				it = find(a[i-1].begin(),a[i-1].end(),x);
				a[i-1][it-a[i-1].begin()] = -1;
				
			}
		}
		sort(a[i-1].begin(),a[i-1].end(),greater<int>());
		cout<<a[i-1][0]<<endl;
	i=2;
		for(int j=0;j<n-i;j++)	
		{	x=a[i][j];
			if(i>0)
			{
				it = find(a[i-1].begin(),a[i-1].end(),x);
				a[i-1][it-a[i-1].begin()] = -1;
				
			}
		}
		sort(a[i-1].begin(),a[i-1].end(),greater<int>());
		cout<<a[i-1][0]<<endl;
		
	return 0;
	
}
*/
#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
long long int a=0,b=0,c=0,x;
for(int i=0;i<=2;i++)
{for(int j=0;j<n-i;j++)
{cin>>x;
if(i==0)
{a+=x;}
if(i==1)
{b+=x;}
if(i==2)
{c+=x;}
}
}
 cout<<a-b<<endl;
 cout<<b-c;   
    return 0;
}
