#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
   int t;
	long long int n,k,num;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n>>k;
	if(n==0 && k==0)
	{cout<<"0"<<" "<<"0"<<endl;}
	else if(n==0 && k!=0)
	{cout<<"0"<<" "<<"0"<<endl;}
	else if(n!=0 && k==0)
	{cout<<"0"<<" "<<n<<endl;}
	else
	{num=n/k; 
		n=n-num*k; 
		cout<<num<<" "<<n<<endl;}
	}
}
