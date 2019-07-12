#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{string s1,s2;
cin>>s1;
cin>>s2;
int x[2];
long long int c,w=0,z;
long int t=s1.length();
if(s1.length()==1)
{cout<<"NO";}
else 
{if(s1.length()!=s1.length())
{cout<<"NO";
c=2;}
else
{for(int i=0;i<t;i++)
{if(s1[i]!=s2[i])
{x[w]=i;
w++;
if(w==2)
{z=1;
break;}
else if(w<2)
{z=2;}
}
else
{z=2;}
}
}
if(z==2)
{cout<<"NO";}
else if(z!=2)
{swap(s1[x[0]],s1[x[1]]);
if(s1==s2)
{cout<<"YES";}
else if(s1!=s2)
{cout<<"NO";
}
}
}
return 0;
}
