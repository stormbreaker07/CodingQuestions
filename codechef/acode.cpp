#include<iostream>
#include<string>
using namespace std;
  

int main()
{int w,i;
    string s; 
    getline(cin,s);
for( ; ; )
{if(s[0]!='0')
    {while(s[0]!='0')
{int x=s.length();
 long long int a[x];
 for(int j=0;j<x;j++)
{a[j]=0;
 a[0]=1;}
 for(int i=1;i<x;i++)
 {
 w=(s[i-1]-'0')*10+(s[i]-'0');
 if(s[i]-'0')
 {a[i]=a[i-1];}
 if(w>9 && w<27)
 {if(i==1)
 {a[i]=a[i]+1;}
 else
 {a[i]=a[i]+a[i-2];}
}
}
cout<<a[x-1]<<endl;
getline(cin,s);    
}}
else if(s[0]=='0')
{break;}
}
return 0;
}  