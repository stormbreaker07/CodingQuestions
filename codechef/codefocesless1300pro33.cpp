#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t;
cin>>t;
int x[t],y[t];
for(int i=0;i<t;i++)
{cin>>x[i]>>y[i];
}
int z1,z2,z3,z4,c=0,a,b;
for(int i=0;i<t;i++)
{a=x[i];
b=y[i];
z1=0,z2=0,z3=0,z4=0;

for(int j=0;j<t;j++)
{if(x[j]>a && y[j]==b)
{z1++;
}
if(x[j]<a && y[j]==b)
{z2++;
}
if(x[j]==a && y[j]>b)
{z3++;
}
if(x[j]==a && y[j]<b)
{z4++;
}
}

if(z1>=1 && z2>=1 && z3>=1 && z4>=1)
{c++;}
z1=0,z2=0,z3=0,z4=0;

}
cout<<c;

return 0;
}
