#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int r,t,w=1000;

void fun(int x,int y,int num)
{cout<<"s2";
 if((x<=0 || y<=0) || (x>8 || y>8 ))
 {return ;}
 if(x==r && y==t)
 {if(num<w)
	 {w=num;}
	 cout<<w;
  return ;}
 fun(x+2,y+1,num+1);
 fun(x+2,y-1,num+1);
 fun(x-2,y+1,num+1);
 fun(x-2,y-1,num+1);
 fun(x+1,y+2,num+1);
 fun(x+1,y-2,num+1);
 fun(x-1,y+2,num+1);
 fun(x-1,y-2,num+1);

}
	
	

int main()
{char c,c2;
 int x1,y1;
 cin>>c>>y1;
 cin>>c2>>t;
 x=int(c)-96;
 r=int(c2)-96;

fun(x,y,0); 	
cout<<w;	
	
return 0;
}	
