/*i am the beast bigger than thanos bigger than galactus********\
 *             i am the STORM BREAKER                           *
 *                     tanuj                                    *
 *                   Pi UVA 412                                 *
 *   programming is a beauty gifted to us so love this gift     *
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int MCD(int a,int b)
{
    if(a%b==0) return b;
    return MCD(b,a%b);
}

int main()
{int n,x,t,y;
	cin>>n;
	while(n!=0)
	{int a[n];
		for(int i=0;i<n;i++)
		{cin>>a[i];}
		int count=0;
		for(int i=0;i<n-1;i++)
		{for(int j=i+1;j<n;j++)
		    {x=a[i];
			 y=a[j];
			 if(MCD(x,y)==1)
			 {count++;}
			 }
	    }
	    t=(n*(n-1))/2;
	    if(count==0)
	    {cout<<"No estimate for this data set."<<endl;}
	    else
	    {cout<<fixed<<setprecision(6)<<sqrt((6*t*1.0)/count)<<endl;
	    }
	cin>>n;
	}
return 0;
}
