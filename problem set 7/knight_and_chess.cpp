#include<bits/stdc++.h>
using namespace std;

int cont =-1;

void solve(int a[][10] , int i , int j , int move)
{
    //base case
    if( i>=10 || j>=10 )
    {
        return ;
    }
    if(i<0 || j<0)
    {
        return ;
    }

    if( move<0)
    {   
        return;
    }
    if( a[i][j] !=0)
    {
        return ;
    } 

    //moving path
    cout<<i<<" "<<j<<" "<<cont<<endl;
    cont++;
    a[i][j] = 1;
    solve(a , i+1 ,j+2 , move-1);
    solve(a , i-1 ,j+2 , move-1);
    solve(a , i+1 ,j-2 , move-1);
    solve(a , i-1 ,j-2 , move-1);
    solve(a , i+2 ,j+1 , move-1);
    solve(a , i-2 ,j+1 , move-1);
    solve(a , i+2 ,j-1 , move-1);
    solve(a , i-2 ,j-1 , move-1);
    

return ;
}



int main()
{
int i,j,n;
cin>>i>>j>>n;
int a[10][10] = {0};


solve(a , i-1 , j-1 , n);
cout<<cont;


    return 0;
}

/*
#include<iostream>
using namespace std;
int count=0;
int board[10][10]={0};
void knight(int i,int j,int n)
{
if(i<0 || j<0 || i>=10 || j>=10 )
return;

if(n==0)
{ if(board[i][j]==0)
{ count++;
board[i][j]++;
}
return;
}

knight(i+2,j+1,n-1);
knight(i+2,j-1,n-1);
knight(i-2,j+1,n-1);
knight(i-2,j-1,n-1);
knight(i+1,j+2,n-1);
knight(i+1,j-2,n-1);
knight(i-1,j+2,n-1);
knight(i-1,j-2,n-1);
}
int main()
{
int board[10][10],n,i,j;
cin>>i>>j>>n;
i--,j--;
knight(i,j,n);
cout<<count;

}
*/