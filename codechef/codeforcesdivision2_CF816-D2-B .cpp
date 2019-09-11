/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *               CF816-D2-B codeforces                          *
 *   programming is a beauty gifted to us so love this gift     *
 */
 
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main()
{long int n,k,q,a,b,c;
	int num[200001]={};
	cin>>n>>k>>q;
	for(long int i=0;i<n;i++)
	{cin>>a>>b;
     for(long int j=a;j<=b;j++)
     {num[j]++;}
    }
    for(long int i=0;i<q;i++)
    {cin>>a>>b;
		for(long int j=a;j<=b;j++)
		{if(num[j]>=k)
			{c++;}
		}
			cout<<c<<endl;
			c=0;
	}
	return 0;
}
