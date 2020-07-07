#include<bits/stdc++.h>
using namespace std;


void subsequence(char *a , char *b , int i,int j)
{
if(a[i] == '\0')
{
    b[j] = '\0';
    cout<<b<<endl;
    return ;
}

b[j] = a[i];
subsequence( a , b , i+1 , j+1 );

subsequence( a , b , i+1 , j);

}

int main()
{
char in[] = "abcd";
char out[10];

subsequence(in , out , 0 , 0 );


    return 0;
}