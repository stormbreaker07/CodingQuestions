#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main()
{
int c;
float x;
cin>>x;
while(x!=0)
{c=0;
    float t=0.00;
for(float i=2.00; ;i=i+1.00)
{c=c+1;
t=t+(1/i);
if(t>=x)
{cout<<c<<" "<<"card(s)"<<endl;
break;}
}
cin>>x;
}
return 0;    
}