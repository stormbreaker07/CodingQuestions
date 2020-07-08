#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
using namespace std;
  
  int main()
  {stack<int> st;
	  int a;
	  for(int i=0;i<5;i++)
	  {cin>>a;
		  st.push(a);
	  }
	  st.pop();
	  st.pop();
	  for(int i=0;i<3;i++)
	  {cout<<st.top()<<" ";
		  st.pop();}
	  return 0;
  }
