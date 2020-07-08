#include<bits/stdc++.h>
using namespace std;

#define l long long int

int main()
{
    l s,s1=0; 
    cin>>s;
    string  s3 = to_string(s);
    char a[] = {4,7};

l n,w,mx;
mx  = 10000000000000;
l one=0,zero=0;
int flag=0;
    for(int i=0;i< 1<<s3.length() ; i++)
    {n  = i;
        one=0;
        zero =0;
    s1=0;
        for(int j=0;j<s3.length();j++)
        {
            w = n&1;
            if(w==1)
            {one++;}
            else if(w==0)
            {zero++;}
            s1 = a[w] + s1*10;
            n = n/2; 
        }

        
        if(s1 >= s && one==zero)
        {
            
          mx = min(mx,s1);
          flag=1;
        }
       


    }
    if(flag==1)
      {cout<<mx;}
      else
      {s1=0;
            if(s3.length()%2==1)
          {
            for(int i=0;i<=s3.length()/2;i++)
          {s1 = s1*10 +a[0];}
            for(int i=0;i<=s3.length()/2;i++)
          {s1 = s1*10 +a[1];}
          
          cout<<s1;
          }
          else
          {
              w = s3.length()+1;

            for(int i=0;i<=w/2;i++)
          {s1 = s1*10 +a[0];}
            for(int i=0;i<=w/2;i++)
          {s1 = s1*10 +a[1];}
          
          cout<<s1;
          }

        }
      
    
    return 0;
}