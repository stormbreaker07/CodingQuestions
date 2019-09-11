#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
int main()
{int x,m,y;
int a[100000];
cin>>x>>y>>m;
x=x%m;
int temp=x;
if(m==0)
{cout<<"1";}
else
{
string s=to_string(temp);
int siz=s.length();
for(int i=0;i<s.length();i++)
{a[i]=s[i]-'0';
}	
for(int j=2;j<=y;j++)
{int carry=0;
int prod;
for(int i=0;i<siz;i++)
{prod=a[i]*x+carry;
	a[i]=prod%10;
	carry=prod/10;
}
while(carry!=0)
{a[siz]=carry%10;
	carry=carry/10;
	siz++;
}
}
int q=0;
for(int i=siz-1;i>=0;i--)
{q=(q*10+a[i])%m;}
cout<<q;
}
return 0;
}
