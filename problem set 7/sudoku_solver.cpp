#include<bits/stdc++.h>
using namespace std;

bool possible(int mat[][9] , int i , int j , int n , int val)
{
    for(int x=0;x<x;x++)
    {
        if(mat[i][x]==val || mat[x][j] == val)
        {
            return false;
        }
    }
    int sqrt_x = sqrt(n);
    int c_x = (i/3)*3;
    int c_y = (j/3)*3;
    for(int x=c_x ; x < c_x+sqrt_x ; x++)
    {
         for(int y=c_y ; y < c_y+sqrt_x ; y++)
        {
            if(mat[x][y]== val)
            {
                return false;
            }
        }
    }

return true;
}



bool solve_sudoku(int mat[][9] , int i , int j , int n)
{
//base case
//if i==n
if(i==n)
{
    return true;
}

//if j==n
if( j==n )
{
    return solve_sudoku(mat , i+1 , 0 , n);
}


if(mat[i][j] != 0)
{
    return solve_sudoku(mat , i , j+1 , n);
}

for(int x =1 ; x<=9;x++)
{
    if(possible(mat , i , j , n , mat[i][j]) )
    {
         mat[i][j] = x;
         if( solve_sudoku(mat , i , j+1 , n))
         {
             return true;
         } 
    }
}


mat[i][j] = 0;
return false;
}


int main()
{
 int mat[9][9];
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        cin>>mat[i][j];
    }
}

solve_sudoku(mat, 0, 0 ,9);



    return 0;
}