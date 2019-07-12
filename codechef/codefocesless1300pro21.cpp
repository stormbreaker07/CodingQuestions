#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long long int a[4];
cin>>a[0]>>a[1]>>a[2]>>a[3];
int c,w=0;
for(int i=0;i<4;i++)
{c=0;
for(int j=i+1;j<4;j++)
{if(a[i]==a[j])
    {c++;}
}
if(c==3)
{cout<<'3';
break;}
else if(c==2)
{cout<<'2';
break;
}
else if(c==1)
{w+=1;}
}
if (c!=3 && c!=2)
{cout<<w;}
return 0;
}