#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int c;
   char a[4][4];
  for(int i=0;i<4;i++)
  {for(int j=0;j<4;j++)
  {cin>>a[i][j];}}

  for(int i=0;i<4;i++)
  {for(int j=0;j<4;j++)
      {if(a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1])
      {c=1;}
      if(a[i][j]==a[i][j-1] && a[i][j]==a[i+1][j])
      {c=1;}
      if(a[i][j]==a[i][j+1] && a[i][j]==a[i-1][j])
      {c=1;}
      if(a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j])
      {c=1;}
      }}
      if(c==1)
      {cout<<"YES";}
      else
      {cout<<"NO";}
      
  return 0;
  }