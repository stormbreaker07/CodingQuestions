#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int a[94]={0};
   long long int x,y;
   long long int sum=0;
   cin>>x>>y;
   string s;
   cin>>s;
   for(long int i=0;i<x;i++)
   {a[int(s[i])]+=1;}
   sort(a,a+94,greater<int>());
   long int i=0;
  if(a[0]>=y)
  {cout<<y*y;}
else
{
    while(a[i]>0)
{ if(a[i]<y)
{sum+=a[i]*a[i];
y=y-a[i];
}
else if(a[i]>=y)
{sum+=y*y;
break;}
i++;
}
cout<<sum;
}
   return 0;
  }