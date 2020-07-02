#include<bits/stdc++.h> 
using namespace std; 

int main()
{int t;
cin>>t;
for(int q=0;q<t;q++)
{string s1,s2;
cin>>s1;
s2="250";
int n1=s1.length();
int n2=s2.length();
int num2,sum,n11=0,n22;
vector<int> v(n1+n2,0);

for(int i=n1-1;i>=0;i--)
{  int carry = 0; 
    int num1 = s1[i] - '0'; 
    n22 = 0;  
    for (int j=n2-1; j>=0; j--) 
    { 
    int num2 = s2[j] - '0'; 
    int sum = num1*num2 + v[n11 + n22] + carry; 
    carry = sum/10; 
    v[n11 + n22] = sum % 10; 
    n22++; 
    } 
if (carry > 0) 
{v[n11 + n22] += carry;}

n11++;
}
int a[v.size()];
for(int i=0;i<v.size();i++)
{a[0]=8;
a[1]=5;
    if(i>=2)
{a[i]=0;}
}

for(int i=0;i<v.size();i++)
{if(v[i]-a[i]>=0)
{v[i]=v[i]-a[i];}
else if(v[i]-a[i]<0)
{v[i]=10+v[i]-a[i];
v[i+1]=v[i+1]-1;
}
}


  for(int j=v.size()-1;j>=0;j--)
  { if(v[j]!=0)
  {for(int k=j;k>=0;k--)
  {cout<<v[k];}
  break;}
  }
  cout<<endl;
  
}
return 0;
}
