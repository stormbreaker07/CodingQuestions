#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

void fun(int w,int x)
{int a[w];
	    if(x==0)
	 for(int i=1;i<10;i++)
	{if(i>x)
		{cout<<x<<i<<" ";}
	}
	else if(x>10)
	{for(int i=0;i<w;i++)
		{a[i]=x%10;
			x=x/10;
			
		}
		if(
			
			
			
	fun(w,10)		
	
}


int main()
{int n;
	cin>>n;
	fun(n,0);
	return 0;
}
