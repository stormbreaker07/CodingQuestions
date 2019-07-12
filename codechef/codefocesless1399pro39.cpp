#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,x;
  cin>>n;
  vector<int> pos;
  vector<int> neg;
  vector<int> zero;
  for(int i=0;i<n;i++)
  {cin>>x;
  if(x>0)
  {pos.push_back(x);}
  else if(x==0)
  {zero.push_back(x);}
  else if(x<0)
  {neg.push_back(x);}
  }
  if(pos.size()>0)
 {cout<<"1"<<" "<<neg[0]<<endl<<pos.size();
 for(int i=0;i<pos.size();i++)
 {cout<<" "<<pos[i];}
 cout<<endl<<zero.size()+neg.size()-1;
 for(int i=0;i<zero.size();i++)
 {cout<<" "<<zero[i];}
 for(int i=1;i<neg.size();i++)
 {cout<<" "<<neg[i];}
 }
 else if(pos.size()==0)
 {cout<<"1"<<" "<<neg[0]<<endl;
  cout<<"2"<<" "<<neg[1]<<" "<<neg[2]; 
 cout<<endl<<zero.size()+neg.size()-3;
 for(int i=0;i<zero.size();i++)
 {cout<<" "<<zero[i];}
 for(int i=3;i<neg.size();i++)
 {cout<<" "<<neg[i];}
 }
return 0;
  }