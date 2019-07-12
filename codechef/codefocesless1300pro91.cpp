#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,num_root1,c=0;
  long long int num;
  long double num_root2;
  cin>>n;
  for(int i=0;i<n;i++)
  {c=0;
    cin>>num;
  num_root1=sqrt(num);
  num_root2=sqrt(num);
  if(num_root2-num_root1>0)
  {cout<<"NO"<<endl;}
  else if(num_root2-num_root1==0)
  { if(num==1)
  {cout<<"NO"<<endl;}
  else
    {for(int i=2;i<=sqrt(num_root1);i++)
  {if(num_root1%i==0)
  {c++;}
  }
  if(c==0)
  {cout<<"YES"<<endl;}
  else
  {cout<<"NO"<<endl;
  }
  }
  }
  }
      return 0;
  }