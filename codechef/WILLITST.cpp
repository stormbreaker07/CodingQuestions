#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main()
{long long int x;
cin>>x;
while(x>1)
{if(x%2==0)
{x=x/2;}
else if(x%2!=0)
{cout<<"NIE";
break;}}
if(x<=1)
{cout<<"TAK";}
return 0;
  }
