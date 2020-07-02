#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
long long int t,i,w,num;
cin>>t;
for(int k=1;k<=t;k++)
{
int mid,c=0,num=0,d=0,z=0;
string s;
cin>>s;
int w=s.length();
vector <int> a;

for(int i=0;i<w;i++)
{if(s[i]!='0')
{
for(int j=i ; j<w ; j++)
  {  a.push_back(s[j]-'0');
}
break;
}
}
w=a.size();
for(int i=0;i<w;i++)
{if(a[i]==9)
{c++;}
}
 

/*for one digit*/
if(w==1)
{
if(a[0]!=9)
{cout<<a[0]+1<<endl;}
else
{cout<<"11"<<endl;}
}
/*for two digit series*/
else if(w==2)
{if(a[0]>a[1])
{
    cout<<a[0]+10*a[0]<<endl;}
else if(a[0]<a[1])
{
cout<<(a[0]+1)*10+(a[0]+1)<<endl;}
else if(a[0]==a[1])
{
if(a[0]!=9)
{
cout<<(a[0]+1)*10+(a[0]+1)<<endl;}
else
{cout<<"101"<<endl;}
}
}
/*for 9 time series*/
else if(c==w)
{cout<<'1';
for(int i=1;i<=w-1;i++)
{cout<<'0';}
cout<<'1';
cout<<endl;
}

else if(w%2==0)
    {
    mid=w/2;
    for(int i=0;mid-1-i>=0;i++)
    {
    if(a[mid+i]!=a[mid-1-i])
     {num=i;
     break;
     }
    }
    if(a[mid+num]>a[mid-1-num] ) 
    {
    a[mid-1]=a[mid-1]+1;
    if(a[mid-1]>=10)
    {for(int i=0;mid-1-i>=1;i++)
    {d=a[mid-1-i]%10;
    z=a[mid-1-i]/10;
    a[mid-1-i]=d;
    a[mid-2-i]+=z;}
    }
    for(int i=0;i<=mid-1;i++)
    {
    cout<<a[i];
    }
    for(int i=0;i<=mid-1;i++)
    {
    cout<<a[mid-1-i];
    }
    cout<<endl;
    }
    else if(a[mid+num]<a[mid-1-num])
    {
    for(int i=0;i<=mid-1;i++)
    {
    cout<<a[i];
    }
    for(int i=0;i<=mid-1;i++)
    {
    cout<<a[mid-1-i];
    }
    cout<<endl;
    }
else if(num==0)
{
a[mid-1]+=1;
for(int i=0;i<=mid-1;i++)
    {
    cout<<a[i];
    }
    for(int i=0;i<=mid-1;i++)
    {
    cout<<a[mid-1-i];
    }
    cout<<endl;
    }
}
    
 /*for odd*/   
else if(w%2!=0)
{
mid=w/2;
for(int i=1;mid-i>=0;i++)
{

if(a[mid-i]!=a[mid+i])
{
num=i;
break;
}
}   
if(num>0)    
    {
    if(a[mid+num]>a[mid-num] ) 
    {
    a[mid]=a[mid]+1;
    if(a[mid]>=10)
    {for(int i=0;mid-i>=1;i++)
    {d=a[mid-i]%10;
    z=a[mid-i]/10;
    a[mid-i]=d;
    a[mid-1-i]+=z;}
    }
    for(int i=0;i<=mid;i++)
    {
    cout<<a[i];
    }
    for(int i=mid-1;i>=0;i--)
    {
    cout<<a[i];
    }
    cout<<endl;
    }
 else if(a[mid+num]<a[mid-num])
    {
    for(int i=0;i<=mid;i++)
    {
    cout<<a[i];
    }
    for(int i=mid-1;i>=0;i--)
    {
    cout<<a[i];
    }
    cout<<endl;
    }
    
    }
else if(num==0)
{
a[mid]+=1;
{for(int i=0;i<=mid;i++)
    {
    cout<<a[i];
    }
    for(int i=mid-1;i>=0;i--)
    {
    cout<<a[i];
    }
    cout<<endl;
}
}
}
}
return 0;
}

