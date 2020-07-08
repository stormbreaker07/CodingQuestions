#include<bits/stdc++.h>
using namespace std;

void sequence(char *a , int n ,int index , int open ,int close )
{
    if(index == 2*n)
    {
        a[index] = '\0';
        cout<<a<<endl;
        return ;
    }

    //for open bracket
    if(open < n)
    {
        a[index] = '(';
        sequence(a , n , index+1 , open+1 , close);
    }

    //for close breacket
    if(close<open)
    {
        a[index] = ')';
        sequence(a , n , index+1 , open , close+1);
    }

return ;
}


int main()
{
int n;
cin>>n;

char a[2*n];

sequence(a,n, 0 ,0 , 0);


    return 0;
}