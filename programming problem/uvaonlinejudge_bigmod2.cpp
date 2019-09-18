
/*i am the beast bigger than thanos bigger than galactus********\
 *                  storm breaker                               *
 *                     tanuj                                    *
 *          concept modular exponential                         *
 *   programming is a beauty gifted to us so love this gift     *
 */

#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{   freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	
	long long int a,n,c,w,m;
	while(cin>>a>>n>>c)
	{w=a;
	m=a%c;
	/*iterate from 1 to n-1*/
	for(long long int i=1;i<n;i++)
	{/*(ab) mod c==(a mod c)(b mod c)mod c*/
	w=((w%c)*m)%c;}
	cout<<w<<endl;
    }
	return 0;
}
