#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{long int n,m,a;
	long long int x,w;
	cin>>n>>m>>a;
	w=n/a;
	if(n%a!=0)
	{w++;}
	x=m/a;
	if(m%a!=0)
	{x++;}
	w=w*x;
	cout<<w;
	return 0;
}	
