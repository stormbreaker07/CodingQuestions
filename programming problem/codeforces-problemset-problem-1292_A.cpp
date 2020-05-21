/*
 * #include<bits/stdc++.h>
using namespace std;

int  main()
{
int n,q;
cin>>n>>q;
int a[3][n+1];
for(int i=0;i<3;i++)
{
	for(int j=0;j<n+1;j++)
	{a[i][j]=0;}
}
int a1,b1,x,y;
for(int i=0;i<q;i++)
{
cin>>a1>>b1;
a[a1][b1] = 1- a[a1][b1];


x=1,y=1;
int c=0;
if(a[x][y]==0)
{
	for(int j=0;j<=n;j++)
	{
		if(x==2 && y==n && a[x][y]!=0)
		{
			c=1;
			break;}
		else
		{
			if(y<n)
			{
			if(x==1)
			{
				if(a[x][y+1]==0)
				{y=y+1;}
				else if(a[x][y+1]!=0)
				{
					x=x+1;
					if(a[x][y]!=0)
					{break;}
				}
			}

			if(x==2 && y<=n)
			{
				if(a[x][y+1]==0)
				{
					y=y+1;
				}
				else if(a[x][y+1]!=0)
				{x=x-1;
					if(a[x][y]!=0)
					{break;}
				}
			}
			
			}
			else if(y==n)
			{
			if(x==1 && a[x+1][y]==0)
			{c=1;
				break;	
			}
			if(x==1 && a[x+1][y]!=0)
			{break;
			}
			else if(x==2 && a[x][y]==0)
			{c=1;break;}
			else if(x==2 && a[x][y]!=0)
			{break;}
			}
		}
			
	}		
}
if(c==1)
{cout<<"Yes"<<endl;}
else if(c==0)
{cout<<"No"<<endl;}

}
	return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;

int  main()
{
	set<int> st;
	set<pair<int,int>> cls;
	int n,q;
	cin>>n>>q;
int a1,b1;
int fir[n+1] = {0};
int sec[n+1] = {0};
int bad=0;
	for(int i=0;i<q;i++)
	{int c=0;
	cin>>a1>>b1;
	
		if(a1==1)
	{fir[a1] = 1-fir[a1];}

	if(a1==2)
	{sec[a1] = 1-sec[a1];}


	if(a1==1 && b1>1 && b1<n)
		{
		for(int j=b1-1:j<=b1+1;j++)
		{if(sec[j]==1)
			{
			cls.insert({a1,b1});
			}
		}}
		else if(a1==1 && b1==n)
		{
			if(sec[b1-1]==1 || sec[b1]==1)
			{
				cls.insert({a1,b1}); 
			} 
		}
	}




}	

	
	
	return 0;
}
