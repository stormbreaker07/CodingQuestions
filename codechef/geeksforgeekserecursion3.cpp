#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
 vector<int> v;
 void fun(int num,int x)
 {if(num>0)
	 {v.push_back(num);
		 num=num-5;
		 fun(num,x);}
	else 
	{v.push_back(num);
		return ;}
  }
 
 
 int main()
 {int t,n;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {cin>>n;
     fun(n,n);
     for(int j=0;j<v.size();j++)
     {cout<<v[j]<<" ";
	 }
	 for(int j=v.size()-2;j>=0;j--)
     {cout<<v[j]<<" ";}
     v.clear();
	 }
	 return 0;
 }
