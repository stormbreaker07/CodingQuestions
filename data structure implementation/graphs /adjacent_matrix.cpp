#include <bits/stdc++.h>
using namespace std;

bool a[1001][1001];

void fun()
{for(int i=0;i<=1000;i++)
{for(int j=0;j<=1000;j++)
	{a[i][j] = false;}
}
}

int main()
{
int n,m;
cin>>n>>m;
bool a[n+1][n+1];
for(int i=0;i<=n;i++)
{for(int j=0;j<=n;j++)
	{a[i][j] = false;}
}
int x,y;
for(int i=0;i<m;i++)
{cin>>x>>y;
	a[x][y]=true;
	a[y][x]=true;
}
int q;
cin>>q;
for(int i=0;i<q;i++)
{ cin>>x>>y;
	if(a[x][y] == true)
	{cout<<"YES"<<endl;}
	else
	{cout<<"NO"<<endl;}
}
return 0;
}
