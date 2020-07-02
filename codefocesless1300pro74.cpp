#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
  
  int main()
  {int x,num;
  cin>>x;
  int v[1001]={0};
  for(int i=0;i<x;i++)
  {cin>>num;
  v[num]+=1;
  }
    sort(v,v+1001,greater<int>());
  
  if(x%2==0)
  {if(v[0]>x/2)
  {cout<<"NO";}
  else
  {cout<<"YES";}
  }
  else if(x%2!=0)
  {if(v[0]>((x/2)+1))
  {cout<<"NO";}
  else 
  {cout<<"YES";}
  }
  return 0;
  }