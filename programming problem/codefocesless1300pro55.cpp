#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x;
cin>>x;
for(int i=0;i<=x;i++)
{for(int j=1;j<=x-i;j++)    
{cout<<" "<<" ";
}  
for(int j=0;j<=i;j++)
{if(i==0)
{cout<<j;}
    else
    {cout<<j<<" ";}
}
for(int j=i-1;j>=0;j--)
{if(j>0)
{cout<<j<<" ";}
else if(j==0)
{cout<<j;}
}
cout<<endl;
}
for(int i=x-1;i>=0;i--)
{for(int j=1;j<=x-i;j++)    
{cout<<" "<<" ";}
for(int j=0;j<=i;j++)
{if(i==0)
{cout<<j;}
else 
    {cout<<j<<" ";}
}
for(int j=i-1;j>=0;j--)
{if(j>0)
    {cout<<j<<" ";}
else if(j==0)
{cout<<j;}
}
cout<<endl;
}
return 0;
}