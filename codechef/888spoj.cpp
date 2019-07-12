#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;

int main()
{int x=0;
string s;
int a[4];
int text;
cin>>text;
for(int h=1;h<=text;h++)
{
getline(cin,s);
reverse(s.begin(),s.end());
int w=s.length();
long long int b[w];

if(w<=2 && w>0)
{cout<<"192"<<endl;}

else if(w==3)
{x=0;
for(int i=0;i<3;i++)
{x=(x+(s[2-i]-'0'))*10;

}
x/=10;
if(x<192)
{x=192;}
else if(x>=192 && x<442)
{x=442;}
else if(x>=442 && x<692)
{x=692;}
else if(x>=692 && x<942)
{x=942;}
else if(x>=942)
{x=192;
x=x+1000;
}
cout<<x<<endl;
}

if(w>3)
{
for(int i=0;i<w;i++)
{b[i]=s[i]-'0';
}

for(int i=0;i<3;i++)
{x=(x+s[2-i]-'0')*10;
}
x/=10;
if(x<192)
{x=192;}
else if(x>=192 && x<442)
{x=442;}
else if(x>=442 && x<692)
{x=692;}
else if(x>=692 && x<942)
{x=942;}
else if(x>=942)
{x=192;
b[3]=b[3]+1;
}
for(int i=0;i<3;i++)
{b[i]=x%10;
x/=10;
}
for(int i=3;i<w-1;i++)
{if(b[i]>=10)
{
b[i]=0;
b[i+1]=b[i+1]+1;
}
}
for(int i=w-1;i>=0;i--)
{cout<<b[i];}
cout<<endl;
}

}
 return 0;   
}