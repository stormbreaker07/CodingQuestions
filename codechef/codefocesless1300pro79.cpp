#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
  
  int main()
  {int mid,c1=1,c2=1,c3=1,c4=1;
  cin>>mid;
  string s;
  cin>>s;
  string s1=s.substr(0,mid);
  string s2=s.substr(mid,2*mid-1);
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
int l=s1.length()-1;

    if((s1[0]-'0')>(s2[l]-'0'))
  {for(int i=0;i<=l;i++)
  {if((s1[i]-'0')<=(s2[l-i]-'0'))
  {c1=2;
  break;}
  }}
  else
  {c1=2;
  }
  
  if((s1[0]-'0')<(s2[l]-'0'))
  {for(int i=0;i<=l;i++)
  {if((s1[i]-'0')>=(s2[l-i]-'0'))
  {c2=2;
  break;}
  }}
  else 
  {c2=2;}

  if((s1[0]-'0')>(s2[0]-'0'))
  {for(int i=0;i<=l;i++)
  {if((s1[i]-'0')<=(s2[i]-'0'))
  {c3=2;
  break;}
  }}
  else
  {c3=2;
  }
  
  if((s1[0]-'0')<(s2[0]-'0'))
  {for(int i=0;i<=mid-1;i++)
  {if((s1[i]-'0')>=(s2[i]-'0'))
  {c4=2;
  break;}
  }}
  else 
  {c4=2;}
  if(c1==1 || c2==1 || c3==1 || c4==1 )
  {cout<<"YES";}
  else if(c1==2 && c2==2 && c3==2 && c4==2)
  {cout<<"NO";}
  
  
  return 0;
  }