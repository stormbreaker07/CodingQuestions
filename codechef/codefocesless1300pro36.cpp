#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{int t,x,a1,a2;
cin>>t;
int a[t],v[t];
vector<int> b(1001,1005);
for(int i=0;i<t;i++)
{cin>>x;
a[i]=x;
v[i]=x;
}
sort(a,a+t);
int mn,m=1000;
for(int i=0;i<t-1;i++)
{mn=1000;
    for(int j=i+1;j<t;j++)
    {if(a[j]-a[i]<mn)
      {   mn=a[j]-a[i];}
    }
    if(mn<b[a[i]])
    {b[a[i]]=mn;}
    if(mn<m)
    {m=mn;}
cout<<a[i]<<" "<<b[a[i]]<<endl;
}
cout<<m<<endl;
vector<int>::iterator it;
it=find(b.begin(),b.end(),m);
cout<<it-b.begin()+m<<" "<<it-b.begin()<<endl;

for(int i=0;i<t;i++)
{if(v[i]==it-b.begin())
{a1=i+1;
break;}
}
for(int i=0;i<t;i++)
{if(v[i]==(it-b.begin()+m) && i!=a1-1)
{a2=i+1;
break;}
}
cout<<a2<<" "<<a1;
return 0;
}