#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int n,m,single,esp,max,common,odd,even;
	  cin>>n>>m;
	  /*least*/
	  common=n/m;
	  odd=n-(n/m)*m;
	  even=m-odd;
	  max=(common*(common+1))/2;
	  odd=odd*max;
	  even=even*(max-common);
	  odd=odd+even;
	  cout<<odd<<" ";
	  /* largest */
	  single=m-1;
	  esp=n-(m-1);
	  max=(esp*(esp-1))/2;
	  cout<<max;
	  return 0;
  }
