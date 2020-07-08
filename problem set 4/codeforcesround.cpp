#include <bits/stdc++.h> 
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
  
  int main()
  {int z,w,y,x,x1,x2,x3;
  cin>>y;
  for(int i=0;i<100;i++)
  {x=y+i;
  z=x;
  int sum=0;
   int q=(log10(z) + 1);
  
  for(int i=0;i<q;i++)
  {w=x%10;
  x=x/10;
  sum+=w;
  }
  if((sum)%4==0)
  {cout<<z;
  break;}
  }
  return 0;
  }