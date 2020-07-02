#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{long int n,m,a,b,c=0;
	cin>>a>>b;
	for( ; ; )
	{n=max(a,b);
	 m=min(a,b);
	if(n-2>=0 && m-1>=0)
	{
	n=n-2;
	m=m-1; 
	c++;
    }
    else
    {break;}
    a=n;
    b=m;}
	cout<<c;
	
	return 0;
}
	
