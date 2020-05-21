#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    int x,y;
    for(int i=1;i<(n*(n-1)/2);i++)
    {
        cin>>x>>y;
        a[x][y] = x;
        a[y][x] = x;
    }

    for(int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==0 && i!=j)
            {
                x=i;
                y=j;
            c=1;
                break;
            }
            
        }
        if(c==1)
            {break;}

    }
int c=0;
    for(int i=1;i<=n;i++)
    {
        
        if(a[x][i]==x && a[y][i]==i)
        {
            cout<<x<<" "<<y;
            c=1;    
            break;
        }
        else if(a[x][i]==i && a[y][i]==y)
        {
            cout<<y<<" "<<x;
            c=1;
            break;
        }
    }
if(c==0)
{cout<<x<<" "<<y;}

    return 0;
}