#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {long int n,c=0;
 cin>>n;
  vector<long long int> v;
  vector<long long int> a(n);
  
  long long int b[n];
 for(int i=0;i<n;i++)
 {cin>>a[i];
 b[i]=a[i];
 }

sort(b,b+n);
for(int i=0;i<n;i++)
{if(a[i]!=b[i])
{v.push_back(i);}}
if(v.size()==0)
{cout<<"yes"<<endl;
cout<<"1"<<" "<<"1";
c=1;}
else
{reverse(a.begin()+v[0],a.begin()+(v[v.size()-1]+1));
for(int i=0;i<n;i++)
{if(a[i]!=b[i])
{c=2;
break;}
}
if(c!=2)
{cout<<"yes"<<endl;
cout<<(v[0]+1)<<" "<<(v[v.size()-1]+1);}
else
{cout<<"no"<<endl;}
}

return 0;
  }