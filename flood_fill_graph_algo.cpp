#include<bits/stdc++.h>
using namespace std;

int n,m;
int vis[100][100];
int mat[100][100];


int fun(int x,int y,int x2,int y2)
{
 if(x == x2 && y == y2)
        {return 1;}
    if(x > n || y > m)
        {return 0;}
    if(x <= 0 || y <= 0)
        {return 0;}
    if(vis[x][y] == 1)
        {return 0;}
    if(mat[x][y] == 0)
        {return 0;}
    vis[x][y] = 1;
    
    if (fun(x+1, y, x2, y2) == 1)
        {
        return 1;}
    if (fun(x-1, y,x2,y2) == 1)
        {
            return 1;}
    if(fun(x, y+1, x2,y2) == 1)
        {
    
            return 1;}
    if(fun(x, y-1, x2,y2) == 1)
        {
          
            return 1;}
    

    return 0;

}

int main()
{
cin>>n>>m;



int w1;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        cin>>w1;
        mat[i][j] = w1;
        vis[i][j] = 0;
    }
}

int t = fun(1,1,n,m);
if(t==1)
{cout<<"YES";}
else
{
    cout<<"NO";
}


    return 0;
}