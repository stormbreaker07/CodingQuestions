#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int n,l,n1,l1,sum=0;
  cin>>n>>l;
  int w,c=0;
  vector <long long int> a;
  for(int i=n;i<=l*10;i++)
  {
      n1=i;
      int len=log10(i)+1;
      for(int j=0;j<len;j++)
  {w=n1%10;
  n1=n1/10;
  if(w!=4 && w!=7)
  {c=2;
  break;}
  }
  if(c!=2)
  {a.push_back(i);}
  else 
  {c=0;}
  }
  for(int j=0;j<a.size();j++)
  {cout<<a[j]<<endl;}
int num=0;
 for(int i=0;a[i+1]<=l;i++)
 {num=i+1;
     sum+=a[i+1]*(a[i+1]-a[i]);
 }
 cout<<endl<<a[num]<<endl;
 sum+=a[0]*(a[0]-n+1);
sum+=a[num+1]*(l-a[num]);
cout<<endl<<sum<<endl;

  return 0;
  }