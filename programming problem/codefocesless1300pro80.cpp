#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int x,y;
  cin>>x>>y;
  int m=x;
  int n=y;
  if(m>=n)
  {
      for(int i=1;i<=(n+m);i++)
  {if(y!=0)
  { if(i%2!=0)
  {cout<<'B';
  x--;}
  else
  {cout<<'G';
  y--;}
  }
else if(y==0)
  { for(int j=i;j<=m+n;j++)
  {cout<<'B';}
  break;}
  }
  }


  else if(m<n)
  {
      for(int i=1;i<=(n+m);i++)
  {if(x!=0)
  { if(i%2!=0)
  {cout<<'G';
  y--;}
  else
  {cout<<'B';
  x--;}
  }
else if(x==0)
  { for(int j=i;j<=m+n;j++)
  {cout<<'G';}
  break;}
  }
  }


return 0;
  }