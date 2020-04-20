/*
#include <bits/stdc++.h>
using namespace std;


long int fun(long int n) 
{ 
    // base case 
    if (n == 0) 
        return 0; 
  
    else
  
        // if last bit set add 1 else add 0 
        return (n & 1) + fun(n >> 1); 
} 


int main()
{
	long int t,n,q;
		cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>q;
		long int num,counteven=0,countodd=0;
		for(int j=0;j<n;j++)
		{
			cin>>num;
			if(num%2==0)
			{counteven++;}
			else
			{countodd++;}
			
		}
		long int x;
		for(int j=0;j<q;j++)
		{long int count=0;
			cin>>x;
			count = fun(x);
			if(count%2!=0)
			{cout<<counteven<<" "<<countodd<<endl;}
			else
			{
				cout<<countodd<<" "<<counteven<<endl;}
		}
	}

	return 0;
}
	
*/


#include <bits/stdc++.h>
using namespace std;

long int fun(long int n) 
{ 
    
    if (n == 0) 
        return 0; 
  
    else
  
        return (n & 1) + fun(n >> 1); 
} 


int main()
{
	
	long int t,n,q;
		cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>q;
		long int num[n],counteven=0,countodd=0;
		for(int j=0;j<n;j++)
		{
			cin>>num[j];
			
		}
		long int x;
		for(int j=0;j<q;j++)
		{long int count=0,w;
			counteven=0;
			countodd=0;
			cin>>x;
			for(int k=0;k<n;k++)
			{w  = num[k]^x;
			count = fun(w);
			if(count%2==0)
			{counteven++;
			}
			else
			{countodd++;}
			}
			cout<<counteven<<" "<<countodd<<'\n';
		}
	}

	return 0;
}
	

