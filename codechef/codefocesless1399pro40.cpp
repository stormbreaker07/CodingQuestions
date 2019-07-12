#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int i,num,size,c=0;
  string s;
  cin>>s;
if(s.length()<=1)
{cout<<"0";}
else if(s.length()>1)
  {for( ; ; )
  {num=0;
   c++;
   size=s.length();
   for(i=0;i<size;i++)
  {num+=s[i]-'0';
  }
  if(num<10)
  {cout<<c;
  break;}
  else
  {s=to_string(num);
  }}}
  return 0;
  }