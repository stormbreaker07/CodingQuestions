#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int c=0;
    string s;
  cin>>s;
  for(long int i=0;i<s.length();i++)
  {if(s[i]=='0')
  {s.erase(s.begin()+i);
  c=1;
  break;}}
  if(c==0)
  {s.erase(s.begin());
  cout<<s;
  }
  else
  {cout<<s;}
  
  return 0;
  }
