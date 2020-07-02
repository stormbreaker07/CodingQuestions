#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
 
int w; 
void fun(int n,int a[])
{   
	if(n>0)
	{for(int i=0;i<n;i++)
	{cout<<a[i]<<" ";} 
     cout<<endl;
     fun(n-1,a,a[0]+1);
 }
 }  
  int main()
{ cin>>w;
  int a[w];
  for(int i=0;i<w;i++)
  {a[i]=1;}
  fun(w,a);
  return 0;
}
