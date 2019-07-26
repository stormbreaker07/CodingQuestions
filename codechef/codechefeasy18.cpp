#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{long int t,i,n,j;
	cin>>t;
	for(i=0;i<t;i++)
	{int x,y,k,a,b,c=0;
		cin>>x>>y>>k>>n;
		x=x-y;
		for(j=0;j<n;j++)
		{cin>>a>>b;
			if(a>=x && b<=k)
			{c=2;
			break;}
		}
      if(c==2)
      {cout<<"LuckyChef"<<endl;}
      else
      {cout<<"UnluckyChef"<<endl;}
    }
    return 0;
}
      
