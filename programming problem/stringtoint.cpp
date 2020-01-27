#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {
    int m,j,inc,t,q;
  for(int q=0;q<10;q++)
 {  string str,str1; 
  getline(cin,str);
  getline(cin,str1);
  reverse(str.begin(),str.end());
  reverse(str1.begin(),str1.end());
  
 int w=str.length();
int e=str1.length();
int t[w],a[w],sum[w],sub[w],b[e];    
  
  for(int i=0;i<w;i++)
  {a[i]=str[i]-'0';}

  for(int i=0;i<w;i++)
  {if(i<e)
  {b[i]=str1[i]-'0';}
   else if(i>=e && i<w)
   {b[i]=0;}
  }
  int c=0,d;
  for(int j=0;j<w;j++)
  {if(j<w-1)
  {d=a[j]+b[j]+c;
  c=d/10;
  d=d%10;
  sub[j]=d;}
  else if(j=w-1)
  {sub[j]=a[j]+b[j]+c;}
  }
  

  c=0;
  for(int i=w-1;i>=0;i--)
  {d=sub[i]+10*c;
  c=d%2;
  d=d/2;
  sub[i]=d;
  }

  for(int j=w-1;j>=0;j--)
  { if(sub[j]!=0)
  {for(int k=j;k>=0;k--)
  {cout<<sub[k];}
  break;}
  }
  cout<<endl;
  
  
  c=0;
  for(int i=0;i<w;i++)
  {
  d=(sub[i]-c)-b[i];
  if(d<0)
  {
  d+=10; 
   c=1;
  }
  else c=0;
  sub[i]=d;
  }
   

  for(int j=w-1;j>=0;j--)
  { if(sub[j]!=0)
  {for(int k=j;k>=0;k--)
  {cout<<sub[k];}
  break;}
  }
  cout<<endl;
  }


return 0;
  }








