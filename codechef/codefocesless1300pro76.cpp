#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int x,y,b,a1,mnb=102,mna=102,mxa=0;
  cin>>x>>y;
  int a[x];
  for(int i=0;i<x;i++)
  {cin>>a1;
   a[x]=a1;
   if(a1>mxa)
   {mxa=a1;}
  if(a1<mna)
  {mna=a1;}
  }
  for(int i=0;i<y;i++)
  {cin>>b;
  if(b<mnb)
  {mnb=b;}
  }
  int c;
  for(int i=mxa;i<mnb;i++)
  {if(i>=(mna*2))
  {cout<<i;
   c=1;
   break;}
   else
   {c=2;}
  }
  if(c==2)
  {cout<<"-1";}
  return 0;
  }

