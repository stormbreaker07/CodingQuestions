#include <bits/stdc++.h> 
#include<iostream>
#include<string>
#include<deque>
using namespace std;
  
  int main()
  {deque<char> d;
	  int n; 
	  cin>>n;
	  string s;
	  cin>>s;
	  d.push_back(s[0]);
	  if(s.length()%2!=0)
	  {for(int i=1;i<s.length();i++)
	  {if(i%2!=0)
		  {d.push_front(s[i]);}
		  else
		  {d.push_back(s[i]);}
	  }
      }
      else
      {for(int i=1;i<s.length()-1;i++)
	  {if(i%2==0)
		  {d.push_front(s[i]);}
		  else
		  {d.push_back(s[i]);}
	  }
      d.push_back(s[s.length()-1]);
      }
      
		  deque<char>::iterator it;
		  for(it=d.begin();it!=d.end();it++)
		  {cout<<*it;}
		  return 0;
    }
