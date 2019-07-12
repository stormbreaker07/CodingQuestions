#include <bits/stdc++.h> 
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
  
  int main()
  {int c=0,x,a,b,y,f1,f2;
  cin>>x>>y;
  multimap<int,int,greater<int> > v;
  for(int i=0;i<x;i++)
  {cin>>a>>b;
    v.insert(pair <int,int>(a,b));
  }
  map <int,int> :: iterator it;
  for(it=v.begin();it!=v.end();it++)
  {c++;
  if(c==y)
{  f1=it->first;
f2=it->second;
break;}
}
c=0;
cout<<"aaaa"<<endl;
for(it=v.begin();it!=v.end();it++)
  {cout<<it->first<<" "<<it->second<<endl;}
cout<<"answer"<<endl;
cout<<f1<<" "<<f2<<endl;
for(it=v.begin();it!=v.end();it++)
  {if(it->first==f1 && it->second==f2)
  {c++;}
}
cout<<c;
return 0;
}