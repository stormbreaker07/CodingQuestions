#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s1,s2;
cin>>s1;
cin>>s2;
int x[2];
int t=s1.length();
long int w=0,z;
if(s1.length()!=s2.length())
{cout<<"1NO";}
else
{if(s1.length()<2)
{cout<<"2NO";}
else if(s1.length()==2)
{swap(s1[0],s1[1]);
if(s1==s2)
{cout<<"3yes";}
else 
{cout<<"4NO";}
}
else if(s1.length()>2)
{for(int i=0;i<t;i++)
{if(s1[i]!=s2[i])
{x[w]=i;
if(w==1)
{z==1;
break;}
else if(w<1)
{z=2;}
w++;
}}
}
}
if(z==1)
{swap(s1[x[0]],s1[x[1]]);
if(s1==s2)
{cout<<"5YES";}
else if(s1!=s2)
{cout<<"6NO";}
}
else if(z==2)
{cout<<"7NO";}

return 0;
}
