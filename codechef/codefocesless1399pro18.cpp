#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,m,c=0;
  cin>>n>>m;
  for( ; ; )
  {for(int j=1;j<=n;j++)
  {if(m>=j)
  {m=m-j;}
  else if(j>m)
  {c=2;
   break;}
  }
  if(c==2)
  {cout<<m;
   break;}
  }
  return 0;
  }