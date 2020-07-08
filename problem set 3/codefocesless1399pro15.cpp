#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,sum=0;
  cin>>n;
  string s;
  for(int i=0;i<n;i++)
  {cin>>s;
  int add=count(s.begin(),s.end(),'+');
  int sub=count(s.begin(),s.end(),'-');
  if(add==2)
  {sum+=1;}
  if(sub==2)
  {sum-=1;}
    }
    cout<<sum;
return 0;
  }