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
{int n,m,low,upp,num;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>num;
	if(i==0)
	{a[i]=num;}
	else if(i>0)
    {a[i]=a[i-1]+num; 
    }
    }
    cin>>m;
	for(int i=0;i<m;i++)
	{cin>>low>>upp;
		if(low>0)
		{cout<<a[upp]-a[low-1]<<endl;}
		else
		{cout<<a[upp]<<endl;}
		}
	return 0;
}
	
