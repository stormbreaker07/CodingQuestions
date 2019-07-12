#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n;
  float x;
  cin>>n;
  for(int i=0;i<n;i++)
{cin>>x;
float num1=360/(180-x);
int num2=360/(180-x);
if(num1==num2)
{cout<<"YES"<<endl;}
else
{cout<<"NO"<<endl;}
}
  return 0;    
  }