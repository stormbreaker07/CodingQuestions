#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int n,k;
  cin>>n>>k;
  int a[2*n];
  if(k%n==0)
  {for(int i=0;i<n;i++)
  {a[i]=k/n;}
  for(int i=0;i<n;i++)
  {a[n+i]=a[i];}
  }
  else if(k%n!=0)
  {int w=k/n;
    for(int i=0;i<n-1;i++)
  {a[i]=w;}
  a[n-1]=k-w*(n-1);
  for(int i=0;i<n;i++)
  {a[n+i]=a[i];}
  }  
  for(int i=0;i<n;i++)
  {for(int j=i;j<n+i;j++)
  {cout<<a[j]<<" ";}
  cout<<endl;
  }
  
  return 0;
  }

  