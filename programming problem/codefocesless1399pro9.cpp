#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int x,n,c=1;
  cin>>n;
  x=n*n;
  int a[n][n];
  int num=1;
  for(int i=0;i<n;i++)
  {
  if(num%2!=0)
  {for(int j=0;j<n;j++)
  {a[j][i]=c;
   c++;}
  }
  else if(num%2==0)
  {for(int j=n-1;j>=0;j--)
  {a[j][i]=c;
  c++;
  }}
  num++;
  }
  for(int i=0;i<n;i++)
  {for(int j=0;j<n;j++)
  { cout<<a[i][j]<<" ";
  }
  cout<<endl;
  }
  return 0;
  }
