/*
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{int n,m,q,x,y,count=0;
	cin>>n>>m>>q;
	long int a[n+1]={0},b[m+1]={0};
	for(int j=0;j<q;j++)
	{cin>>x>>y;
		a[x]=a[x]+1;
		b[y]=b[y]+1;
	}
	for(int j=1;j<=n;j++)
	{for(int k=1;k<=m;k++)
		{if((a[j]+b[k])%2!=0)
			{count++;}
		}
	}
	cout<<count<<endl;
    }
	return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int n,m , fore[ 2001][ 2001];


void fun(int x, int y, int w)
{
    if(x<1 || x>n || y<1 || y>m)
    {return ;}

    if (x + 1 <= n)
    {
        if (fore[x + 1][y] == 0)
        {
            fore[x + 1][y] = w + 1;
            fun(x + 1, y, fore[x + 1][y]);
        }
        else
        {
            fore[x + 1][y] = min(fore[x + 1][y], w + 1);
            if (fore[x + 1][y] > w + 1)
            {
                fun(x + 1, y, fore[x + 1][y]);
            }
        }
    }
    if (y + 1 <= m)
    {
        if (fore[x][y + 1] == 0)
        {
            fore[x][y + 1] = w + 1;
            fun(x, y + 1, fore[x][y + 1]);
        }
        else
        {
            fore[x][y + 1] = min(fore[x][y + 1], w + 1);
            if (fore[x][y + 1] > w + 1)
            {
                fun(x, y + 1, fore[x][y + 1]);
            }
        }
    }

    if (x - 1 >= 1)
    {
        if (fore[x - 1][y] == 0)
        {
            fore[x - 1][y] = w + 1;
            fun(x - 1, y, fore[x - 1][y]);
        }
        else
        {
            fore[x - 1][y] = min(fore[x - 1][y], w + 1);
            if (fore[x - 1][y] > w + 1)
            {
                fun(x - 1, y, fore[x - 1][y]);
            }
        }
    }

    if (y - 1 >= 1)
    {
        if (fore[x][y - 1] == 0)
        {
            fore[x][y - 1] = w + 1;
            fun(x, y - 1, fore[x][y - 1]);
        }

        else
        {
            fore[x][y - 1] = min(fore[x][y - 1], w + 1); 
            if (fore[x][y - 1] > w + 1)
            {
                fun(x, y - 1, fore[x][y - 1]);
            }
        }
    }
}

int main()
{
    ifstream I("input.txt");
    ofstream O("output.txt");
    
    I >> n >> m;
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            fore[i][j] = 0;
        }
    }

    int k, x, y;
    I >> k;
    for (int l = 1; l <= k; l++)
    {
        I >> x >> y;
       fun(x,y,fore[x][y]);
    }

    int mx = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (fore[i][j] > mx)
            {
                x = i;
                y = j;
                mx = fore[i][j];
            }
        }
    }
    O << x << " " << y;

    return 0;
}
