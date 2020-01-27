#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long long int x,y,num;
  cin>>x>>y;
  num=abs(x)+abs(y);
  if(x==0 && y==0)
  {cout<<"0"<<" "<<"0"<<" "<<"0"<<" "<<"0";}
  else if(x>0 && y>0)
  {cout<<"0"<<" "<<num<<" "<<num<<" "<<"0";}
  else if(x>0 && y<0)
  {cout<<"0"<<" "<<-num<<" "<<num<<" "<<"0";}
  else if(x<0 && y<0)
  {cout<<-num<<" "<<"0"<<" "<<"0"<<" "<<-num;}
  else if(x<0 && y>0)
  {cout<<-num<<" "<<"0"<<" "<<"0"<<" "<<num;}
  return 0;
  }
  