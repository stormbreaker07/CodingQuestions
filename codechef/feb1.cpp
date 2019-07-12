#include <iostream>
using namespace std;

int main()
{long int x,y,w,t;
cin>>t;
for(int j=0;j<t;j++)
{cin>>x>>y;
if(x==0 && y==0)
{cout<<'0'<<endl;}
else if(x==y && x!=0 && y!=0)
{w=0;
for(int i=1;i<=x;i++)
{if(i%2==0)
{w=w+3;}
else if(i%2!=0)
{w=w+1;}
}
cout<<w<<endl;
}
else if(x!=y && x-1==y+1)
{x=x-1;
y=y+1;
w=0;
for(int i=1;i<=x;i++)
{if(i%2==0)
{w=w+3;}
else if(i%2!=0)
{w=w+1;}
}
if(w%2==0)
{w=w-1;
cout<<w<<endl;}
else if(w%2!=0)
{w=w+1;
cout<<w<<endl;}
}
else
{cout<<"No Number"<<endl;}
}
return 0;
}