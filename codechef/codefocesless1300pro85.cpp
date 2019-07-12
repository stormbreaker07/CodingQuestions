#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int x,s,a=0,b=0,m=0;
  cin>>x;
  for(long int i=0;i<x;i++)
  { cin>>s;
  if(s==25)
  {a++;}
  if(s==50)
  {if(a>0)
  {a--;
  b++;}
  else if(a==0)
  {m=1;
  break;}
  }
  if(s==100)
  {if(b>0 && a>0)
  {b--;
  a--;}
  else if(a>=3 && b==0)
  {a=a-3;}
  else if(a<3 && b==0)
  {m=1;
  break;}
  else if(a==0 && b>=0)
  {m=1;
  break;} 
  }
  }
  if(m==1)
  {cout<<"NO";}
  else if(m==0)
  {cout<<"YES";}
  return 0;
  }
