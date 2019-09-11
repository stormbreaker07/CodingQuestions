
/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *          concept modular exponential                         *
 *   programming is a beauty gifted to us so love this gift     *
 */

#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
 long int m;
long long int pow(long long int a , long long int n)
{
	if (n==0)
	{return 1;}
	else if(n==1)
	{return a;}
	else
	{int r=pow(a,n/2);
		if(n%2==0)
		return ((r%m)*(r%m))%m;
		else
		return ((r%m)*(r%m)*a)%m;
	}
}  
  
  
int main()
{ long long int a,b;
	while(cin>>a>>b>>m)
	{long long int w =pow(a,b);
	cout<<w<<endl;
    }
	return 0;
}
