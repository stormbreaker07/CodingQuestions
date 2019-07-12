#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int x,n1=0,n2=0,n3=0,n4=0,n6=0,c=0,w=0,z=0;
cin>>x;
for(long int i=0;i<x;i++)
{cin>>w;
if(w==1)
{n1++;}
else if(w==2)
{n2++;}
else if(w==3)
{n3++;}
else if(w==4)
{n4++;}
else if(w==6)
{n6++;}
else
{c=1;
break;}
}
if(c==1)
{cout<<"-1";}
else if(c!=1)
{if(n1!=(n2+n3))
{cout<<"-1";}
else if(n4>n2)
{cout<<"-1";}
else if((n4+n6)!=n2+n3)
{cout<<"-1";}
else if(n1==(n2+n3) && (n2+n3)==(n4+n6) && (n6-(n2-n4))==n3)
{z=n2-n4;
for(long int i=0;i<n4;i++)
{cout<<"1"<<" "<<"2"<<" "<<"4"<<endl;}
for(long int i=0;i<z;i++)
{cout<<"1"<<" "<<"2"<<" "<<"6"<<endl;}
for(long int i=0;i<n6-z;i++)
{cout<<"1"<<" "<<"3"<<" "<<"6"<<endl;}
}
}
return 0;
}