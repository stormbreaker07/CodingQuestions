#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,c=0,m=0,num=0;
	  cin>>n;
	  int a[n];
	  deque<int> d;
	  for(int i=0;i<n;i++)
	  {cin>>a[i];
		  d.push_back(a[i]);}
	  deque<int>::iterator it;
	  sort(a,a+n);
	  for(int i=1;i<n;i++)
	  {if(a[i]!=a[i-1])
		  {num=2;}
	  }
	  if(num==0)
	  {cout<<0;}
	  else if(num==2)
	  {for(int i=n-1;i>=0;i--)
	  {if(d[n-1]<=d[0])
		  {m++;
			  d.push_front(d[n-1]);
			  it=d.end();
			  d.erase(it);
		  }
		  else if(d[n-1]>d[0])
		  {
			  break;
		  }
	  }
	  
	for(int i=0;i<n;i++)
	{if(a[i]!=d[i])
		{c=4;}
	} 
	if(c==4)
	 {cout<<"-1";}
	  else 
	  {cout<<m;}
  }
	  return 0;
  }
