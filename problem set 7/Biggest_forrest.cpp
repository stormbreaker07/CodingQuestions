#include<bits/stdc++.h>
using namespace std;


long int store=0,cont=0, n;
char a[1001][1001];

void find_group(int i , int j) {

//base case
if(i>=n || i<0 || j>=n || j<0 || a[i][j]=='W')
{
    return;
}

if(a[i][j]=='T')
{
    cont++;
    a[i][j] = 'W';
}

find_group(i,j-1);
find_group(i-1,j);
find_group(i+1,j);
find_group(i,j+1);

}

int  main() {

cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
       if(a[i][j]=='T')
       {cont=0;
           find_group(i,j);
           if(cont> store)
           {store = cont;}
       }
    }
}

cout<<store;

    return 0;
}