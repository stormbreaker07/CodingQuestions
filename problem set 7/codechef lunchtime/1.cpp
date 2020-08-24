#include<bits/stdc++.h>
using namespace std;

#define l long long int 

int main()
{

  int t;
  cin>>t;
  while(t--) {
string s;
l n,m,x;
cin>>n>>m;
for(l i=0;i<n;i++)
{
    cin>>x;
    if(x%m==0)
    {
        s = s+'1';
    }
    else
    {
        s = s + '0';
    }
    
}
cout<<s<<endl;
s.clear();
  }  


    return 0;
}