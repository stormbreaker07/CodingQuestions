#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{long int sum=0;
int  x,w,zero=0,five=0;
cin>>x;
for(int i=1;i<=x;i++)
{cin>>w;
if(w==0)
{zero++;}
else if(w==5)
{five++;}

}
if(zero==0)
{cout<<"-1";}
else if(zero!=0 && five<9)
{cout<<"0";}
else if(zero!=0 && five>=9)
{sum=five/9;
sum=sum*9;
for(int i=1;i<=sum;i++)
{cout<<"5";}
for(int i=1;i<=zero;i++)
{cout<<"0";}
}

return 0;
}
