#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{int t;
cin>>t;
int a[6]={1,2,5,10,50,100};
for(int j=1;j<=t;j++)
{
long int n;
cin>>n;
long int num,sum=0;
for(int i=5;i>=0;i--)
{num=0;
    if(n>=a[i])
{num=n/a[i];
n-=num*a[i];
}
sum+=num;
}
cout<<sum<<endl;
}
 return 0;   
}
