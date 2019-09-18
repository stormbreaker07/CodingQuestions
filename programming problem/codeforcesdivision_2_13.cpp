#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int r,x1,y1,x2,y2;
	  cin>>r>>x1>>y1>>x2>>y2;
	  long double x=abs(x2-x1);
	  long double y=abs(y2-y1);
	  y=y*y;
	  x=x*x;
	  x=sqrt(x+y);
	int m=ceil(x/(2*r));
	cout<<m;
	
	return 0;
} 
	
	  
