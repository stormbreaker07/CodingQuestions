#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int x,y,z,y1;
cin>>x;
cin>>y;
y1=y;
int c=0;
for(int i=1;i<x;i++)
{cin>>z;
if(z>y)
{y=z;
c++;
}
if(z<y1)
{y1=z;
c++;
}
}
cout<<c;

return 0;
}