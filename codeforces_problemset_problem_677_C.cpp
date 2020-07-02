#include <bits/stdc++.h>
using namespace std;

#define l long long int
#define MOD 1000000007

int main()
{
 string v;
 cin>>v;
 l val,ans=1;
 for(int i=0;i<v.size();i++)
 {
     if(int(v[i])=='-')
     {val = 62;}
     else if(int(v[i])=='_')
     {val = 63;}
     else if(int(v[i])>=48 && int(v[i])<=57)
     {val = int(v[i])-48;}
     else if(int(v[i])>=65 && int(v[i])<=90)
     {val = int(v[i])-55;}
     else if(int(v[i])>=97 && int(v[i])<=122)
     {val = int(v[i])-(97 - 36);}

    
    cout<<val<<endl;
    for (l j = 0; j < 6; j++)
    {			
        if ((val&(1<<j)) == 0)
        {ans = (ans*3)%MOD;}
    }
  
    
 }

cout<<ans; 
    return 0;
}