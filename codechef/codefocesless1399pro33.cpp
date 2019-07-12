#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {long long int sum3,num3,num1,num2;
  int c=0;
  cin>>num1>>num2;
  num3=num1+num2;
  vector<int> v1;
  vector<int> v2;  
  vector<int> v;
  int n1=log10(num3)+1;
    for(int i=1;i<=n1;i++)
    {if(num3%10!=0)
    {v.push_back(num3%10);}
    num3=num3/10;
    if(num3==0)
    {break;}
    }
int n2=log10(num1)+1;
    for(int i=1;i<=n2;i++)
    {if(num1%10!=0)
    {v1.push_back(num1%10);}
    num1=num1/10;
    }
 int n3=log10(num2)+1;
    for(int i=1;i<=n3;i++)
    {if(num2%10!=0)
    {v2.push_back(num2%10);}
    num2=num2/10;
    }
    num1=0;
for(int i=0;i<v1.size();i++)
{num1+=v1[i]*pow(10,i);
}

num2=0;
for(int i=0;i<v2.size();i++)
{num2+=v2[i]*pow(10,i);
}

num3=0;
for(int i=0;i<v.size();i++)
{num3+=v[i]*pow(10,i);
}
sum3=num1+num2;
if(sum3==num3)
{cout<<"YES";}
else if(sum3!=num3)
{cout<<"NO";}

  return 0;
  }