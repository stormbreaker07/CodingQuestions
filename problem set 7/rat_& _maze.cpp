#include<bits/stdc++.h>
using namespace std;

bool rat_maze(char maze[10][10] , int sol[10][10] , int i ,int j , int n ,int m)
{
if(i==n && j==m)
{
    sol[i][j] = 1;
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {cout<<sol[i][j]<< " ";}
        cout<<endl;
    }
    cout<<endl;

    return true;
}

//false condition
if(i>n || j>m)
{
    return false;
}

if(maze[i][j] == 'X')
{
    return false;
}

//recursion
sol[i][j] = 1;

bool x = rat_maze(maze , sol , i+1 , j ,n ,m);
bool y = rat_maze(maze , sol ,i , j+1 , n , m);

sol[i][j] = 0;

if(x||y)
{
    return true;
}
return false;

}



int main()
{
    char maze[10][10] = { "000X",
                        "00X0",
                        "X000",
                        "x000"
    };

    int sol[10][10]={0};
    int n=4,m =4;

rat_maze(maze, sol ,0 , 0, n-1 ,m-1 );

    return 0;
}