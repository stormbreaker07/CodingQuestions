#include <bits/stdc++.h>
using namespace std;
int c=0;


int main()
{int n;
	cin>>n;
	int a[5001];
	for(int i=1;i<=n;i++)
	{cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{if(a[a[a[i]]] == i)
	{c=1;}
	}
	if(c==1)
	{cout<<"YES";}
	else if(c==0)
	{cout<<"NO";}
	
	return 0;
}
