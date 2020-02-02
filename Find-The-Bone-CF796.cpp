#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{long int n,m,k,q,w=1;
	scanf("%ld", &n);
	scanf("%ld", &m);
	scanf("%ld", &k);
	long int x[k],y[k];
	long int a[n+1]={0};
	for(long int i=0;i<m;i++)
	{
	scanf("%ld",&q);
	a[q]=-1;
	}
	for(long int i=0;i<k;i++)
	{scanf("%ld", &x[i]);
	 scanf("%ld", &y[i]);	
     }
	for(long int i=0;i<k;i++)
	{
	if(a[w]==-1)
	{break;}		
	if(w==x[i])
	{w=y[i];}
	else if(w==y[i])
	{w=x[i];}
    }
	printf("%ld",w);
	return 0;
}
		
	
	
