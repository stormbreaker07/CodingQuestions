/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *              Combinations UVA 369                            *
 *   programming is a beauty gifted to us so love this gift     *
 */
 
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
long long int c=1;
int main()
{int n,m;
	cin>>n>>m;
	while(n!=0 || m!=0)
	{c=1;
	int j=0;
	int a[m];
	for(int i=n-m+1;i<=n;i++)
	{a[j]=i;
		j++;
	}
	for(int i=m;i>0;i--)
	{
		for(int j=0;j<m;j++)
		{if(a[j]%i==0 && a[j]>=i)
			{a[j]=a[j]/i;
				break;}
			
		}
	}
	for(int i=0;i<m;i++)
	{c=c*a[i];}
	
	cout<<n<<" things taken "<<m<<" at a time is "<<c<<" exactly."<<endl;
    cin>>n>>m;
    }
	return 0;
}

