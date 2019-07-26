#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
{long int n;
	cin>>n;
	int x1,x2,x3,y1,y2,y3,l1,l2,l3,c=0;
	for(int i=0;i<n;i++)
	{cin>>x1>>y1>>x2>>y2>>x3>>y3;
		l1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		l2=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
        l3=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
     if( (l1+l2==l3) || (l2+l3==l1) || (l1+l3==l2) )
     {c++;}
     }
     cout<<c;
	return 0;
}
