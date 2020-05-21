// 
#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	long int a[n]; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long int cont =0,w;

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			w = a[i]&a[j];		
				if(w==0)
				{cont++;}
		}
	}
	cout<<cont;

	return 0;
}