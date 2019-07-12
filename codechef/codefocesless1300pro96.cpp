#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long long int x,y,n,sum;
  cin>>x>>y>>n;
  if(n%3==1)                 /*x*/
  {if((n/3)%2==0)            /*even*/
  {sum=x;}
  else                        /*odd*/
   {sum=-x;}
  }
  else if(n%3==2)            /*y*/ 
  {if((n/3)%2==0)            /*even*/
  {sum=y;}
  else                        /*odd*/
   {sum=-y;}
  }
  else if(n%3==0)            /*x-y*/ 
  {if((n/3)%2==0)            /*even*/
  {sum=x-y;}
  else                        /*odd*/
   {sum=y-x;}
  }
 long double a=1000000007;
  long long int c=sum-floor(sum/a)*a;
cout<<c;
  return 0;

  }