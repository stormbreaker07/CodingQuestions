#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int x,a;
  cin>>x;
  vector<int> pos;
  vector<int> neg;
  for(int i=0;i<x;i++)
{cin>>a;
neg.push_back(a);
}
sort(neg.begin(),neg.end());
swap(neg[0],neg[x-1]);
for(int i=0;i<x;i++)
{cout<<neg[i]<<" ";
}
return 0;
}