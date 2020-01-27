#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int t;
	vector<int> v;
cin>>t;
for(int i=0;i<t;i++)
{long int n,k,j,a,b,m,w,num;
	cin>>n>>k;
long int A[n],B[n];	
    for(j=0;j<n;j++)
	{cin>>A[j];
	B[j]=A[j];}
	for(j=0;j<n;j++)
	{
	a=B[j%n];
	b=B[n-(j%n)-1];
	num = (a | b) & (~a | ~b); 
	B[j%n]=num;
    }
    if(k<=n)
    {
	for(j=0;j<k;j++)
	{
	a=A[j%n];
	b=A[n-(j%n)-1];
	num = (a | b) & (~a | ~b); 
	A[j%n]=num;
    }
	for(j=0;j<n;j++)
	{cout<<A[j]<<" ";
	}
	cout<<endl;
    }
    else if(k>n)
    {w=k/n;
	w=w%3;
	if(w==1)
	{for(j=0;j<(n+1)/2;j++)
		{ m=A[j%n];
		A[j%n] = B[j%n];
		A[n-(j%n)-1] = m;
	    }
	}
	else if(w==2)
	{for(j=0;j<(n+1)/2;j++)
		{m=A[n-(j%n)-1];
		A[j%n] = m;
		A[n-(j%n)-1] = B[j%n];
	    }
	}
	for(j=0;j<k%n;j++)
	{
	a=A[j%n];
	b=A[n-(j%n)-1];
	num = (a | b) & (~a | ~b); 
	A[j%n]=num;
    }
	if(n%2==0)
	{for(j=0;j<n;j++)
	{cout<<A[j]<<" ";
	}
	cout<<endl;
    }
    else
    {for(j=0;j<n;j++)
	{if(j==n/2)
		{cout<<0<<" ";}
	else	
		{cout<<A[j]<<" ";}
	}
	cout<<endl;
    }
    
    }	
}

return 0;
}
