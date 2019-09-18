#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{long int n,m,k,t,a,b,i,j;
	cin>>n>>m>>k>>t;
	int v[n][m]={0};
	for(i=0;i<k;i++)
	{cin>>a>>b;
		v[a-1][b-1]=-1;
	}
	for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
		{cout<<v[i][j]<<" ";}
		cout<<endl;
	}
	int c=1;
	for(i=0;i<n;i++)	
	{
		for(j=0;j<m;j++)
		{
			if(v[i][j]==0)
			{v[i][j]=c;
			c=c%3;
		    c++;
			}
		}
	}
	for(i=0;i<t;i++)
	{cin>>a>>b;
		if(v[a-1][b-1]==1)
		{cout<<"Carrots"<<endl;}
		else if(v[a-1][b-1]==2)
		{cout<<"Kiwis"<<endl;}
		else if(v[a-1][b-1]==3)
		{cout<<"Grapes"<<endl;}
		else
		{cout<<"Waste"<<endl;}
	} 	
return 0;
}
