#include<iostream>
using namespace std;
  
  int main()
  {long int n,x,y,nd2;
  cin>>n>>x>>y;
  
  double nd1=(n*(y/100.00));
   nd2=(n*(y/100.00));  
  if(nd1==nd2)
  {if(x>=nd2)
  {cout<<"0";}
  else if(x<nd2)
  {cout<<nd2-x;}
  }
  else if(nd1!=nd2)
  {nd2++;
    if(x>=nd2)
  {cout<<"0";}
  else if(x<nd2)
  {cout<<nd2-x;}
  } 
 return 0;
  }
