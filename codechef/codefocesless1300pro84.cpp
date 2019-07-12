#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int n,a=0,b=0,sum1=0,sum2=0,c;
  cin>>n;
  int x[n],y[n];
  for(int i=0;i<n;i++)
  {cin>>x[i]>>y[i];
  a+=x[i];
  b+=y[i];
  }
  if(a%2==0 && b%2==0)
  {cout<<'0';}
  else if((a+b)%2!=0 )
  {cout<<"-1";}
  else if(a%2!=0 && b%2!=0)
  {c=0;
    for(int i=0;i<n;i++)
    { sum1=0;
      sum2=0;
        if((x[i]+y[i])%2!=0)
        {
            swap(x[i],y[i]);
         c++;
            for(int j=0;j<n;j++)
            {
            sum1+=x[j];
            sum2+=y[j];
            }            
        }
        if(sum1%2==0 && sum2%2==0 && sum1!=0 && sum2!=0)
        {break;}
    }
  }
  if(c==1)
  {cout<<c;}
  else if(c==0)
  {cout<<"-1";
  }
  return 0;
  }