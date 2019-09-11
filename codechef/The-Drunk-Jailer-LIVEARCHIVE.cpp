/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *         The Drunk Jailer LIVEARCHIVE 2557                    *
 *   programming is a beauty gifted to us so love this gift     *
 */
 
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
long long int c=1;
int main()
{int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{cin>>n;
		int a[n+1];
		fill_n(a,n+1,1);
		a[0]=0;
		for(int k=1;k<=n;k++)
		{if(k%2==0)
			{a[k]=0;}
		}	
		for(int j=3;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
					{ 
						if(k%j==0)
							{a[k]=1-a[k];}
			        }
		}
	sort(a,a+n+1,greater<int>());
	int k=0,c=0;
	while(a[k]!=0)
	{c++;
	k++;
	}	
	cout<<c<<endl;
}
	return 0;
}
