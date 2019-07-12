#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n;
  cin>>n;
  if(n==10 || n>21)
  {cout<<"0";}
  else if(n>10 && n<20)
  {cout<<"4";}
  else if(n==20)
  {cout<<"15";}
  else if(n==21)
  {cout<<"4";}
  else
  {cout<<"0";}

  return 0;
  }