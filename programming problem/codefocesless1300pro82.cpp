#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {int x,c=0;
  long long int y;
  long double w;
  cin>>x;
  for(int i=1;i<=x;i++) 
   {for(int j=i;j<=x;j++)
        {w=sqrt(i*i+j*j);
            if(w<=x)
            {   y=sqrt(i*i+j*j);
                w=w-y;
                if(w==0)
                {c++;}
            }
            else
            {break;
            }
        }

    }
    cout<<c;
  return 0;
  }